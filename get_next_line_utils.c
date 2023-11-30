/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inryu <inryu@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 07:07:34 by inryu             #+#    #+#             */
/*   Updated: 2023/11/12 20:46:54 by inryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *a, int b)
{
	int	i;

	if (!a)
		return (NULL);
	if (!b)
		return (a + ft_strlen(a));
	i = 0;
	while (a[i])
	{
		if (a[i] == b)
			return (a + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *dest, char *src)
{
	int		dest_len;
	int		src_len;
	char	*ret;
	int		i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	ret = malloc(dest_len + src_len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < dest_len)
	{
		ret[i] = dest[i];
		i++;
	}
	i = 0;
	while (i < src_len)
	{
		ret[dest_len + i] = src[i];
		i++;
	}
	ret[dest_len + src_len] = '\0';
	return (ret);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (!src)
		return (NULL);
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
