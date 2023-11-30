/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyowchoi <hyowchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:42:38 by seulee2           #+#    #+#             */
/*   Updated: 2023/11/30 15:55:55 by hyowchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*cut_s;
	unsigned int	i;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		cut_s = malloc(sizeof(char) *(s_len - start) + 1);
	else
		cut_s = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len && s[start] != 0)
	{
		cut_s[i] = s[start];
		i++;
		start++;
	}
	cut_s[i] = 0;
	return (cut_s);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	p = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}


char	*gnl_strjoin(char *s1, char *s2)
{
	char			*cat_s;
	unsigned int	s_i;
	unsigned int	cat_i;

	if (s1 == 0 && s2 == 0)
		return (0);
	else if (s1 == 0)
		return (ft_strdup(s2));
	else if (s2 == 0)
		return (ft_strdup(s1));
	cat_s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	s_i = 0;
	cat_i = 0;
	while (s1[s_i] != 0)
		cat_s[cat_i++] = s1[s_i++];
	s_i = 0;
	while (s2[s_i] != 0)
		cat_s[cat_i++] = s2[s_i++];
	cat_s[cat_i] = 0;
	free(s1);
	return (cat_s);
}
