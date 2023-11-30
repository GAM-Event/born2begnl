/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayoon <sayoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:38:49 by sayoon            #+#    #+#             */
/*   Updated: 2023/11/30 15:38:50 by sayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*str;
	char	*t;
	char	c;
	size_t	i;
	size_t	s;

	str = NULL;
	c = 0;
	s = 0;
	if (read(fd, NULL, 0) < 0)
		return (NULL);
	while (c != 10 && read(fd, &c, 1))
	{
		t = malloc(s + 2);
		i = -1;
		while (++i < s)
			t[i] = str[i];
		t[s++] = c;
		t[s] = 0;
		free(str);
		str = t;
	}
	return (str);
}
