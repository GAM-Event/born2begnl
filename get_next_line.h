/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyowchoi <hyowchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:42:46 by seulee2           #+#    #+#             */
/*   Updated: 2023/11/30 15:46:32 by hyowchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<unistd.h>
# include<stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *s1);
void	free_init(char **s);
char	*gnl_strjoin(char *s1, char *s2);
int		check_n(const char *s);
void	cut_n_cat(char **buffer, char **cut_s, ssize_t n_index, int ver);
void	make_line(int fd, char **buffer, char **next, ssize_t *n_idx);
int		invalid_fd(char **next_start, int fd);
char	*get_next_line(int fd);

#endif