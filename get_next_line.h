/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inryu <inryu@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:14:40 by inryu             #+#    #+#             */
/*   Updated: 2023/11/12 20:41:15 by inryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *s);
char	*ft_strchr(char *a, int b);
char	*ft_strjoin(char *dest, char *src);
char	*ft_strdup(char *src);
char	*extract(char **backup);
char	*read_fd(int fd, char *buf, char *backup);
char	*get_next_line(int fd);
char	*lastone(char **backup);

#endif
