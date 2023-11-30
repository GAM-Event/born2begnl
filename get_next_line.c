/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyowchoi <hyowchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:42:28 by seulee2           #+#    #+#             */
/*   Updated: 2023/11/30 16:00:04 by hyowchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

int	check_n(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == 10)
			return (i);
		i++;
	}
	return (-1);
}

void	cut_n_cat(char **buffer, char **cut_s, ssize_t n_index, int ver)
{
	char	*temp;

	if (ver == 1 || ver == 2)
	{
		temp = ft_substr(*cut_s, 0, n_index + 1);
		*buffer = gnl_strjoin(*buffer, temp);
		free(temp);
	}
	if (ver == 2)
	{
		temp = *cut_s;
		*cut_s = ft_substr(*cut_s, n_index + 1, ft_strlen(*cut_s) + 2);
		free(temp);
	}
}

void	make_line(int fd, char **buffer, char **next, ssize_t *n_idx)
{
	char	*dish;
	ssize_t	read_size;

	dish = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while (1)
	{
		read_size = read(fd, dish, BUFFER_SIZE);
		if (read_size == -1 || read_size == 0)
			break ;
		dish[read_size] = 0;
		*n_idx = check_n(dish);
		if (*n_idx >= 0)
		{
			cut_n_cat(buffer, &dish, *n_idx, 1);
			if (*n_idx + 1 != read_size)
				*next = ft_substr(dish, *n_idx + 1, read_size - *n_idx - 1);
			break ;
		}
		*buffer = gnl_strjoin(*buffer, dish);
		if (read_size < BUFFER_SIZE)
			break ;
	}
	free(dish);
}	

int	invalid_fd(char **next_start, int fd)
{
	if (read(fd, NULL, 0) == -1)
	{
		if (next_start != NULL)
		{
			free(*next_start);
			*next_start = 0;
		}
		return (1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*next_start;
	char		*buffer;
	ssize_t		n_index;

	if (invalid_fd(&next_start, fd))
		return (NULL);
	buffer = 0;
	if (next_start != NULL)
	{
		n_index = check_n(next_start);
		if (n_index >= 0)
		{
			cut_n_cat(&buffer, &next_start, n_index, 2);
			return (buffer);
		}
		else
		{
			if (*next_start != 0)
				buffer = gnl_strjoin(buffer, next_start);
			free(next_start);
			next_start = 0;
		}
	}
	make_line(fd, &buffer, &next_start, &n_index);
	return (buffer);
}
