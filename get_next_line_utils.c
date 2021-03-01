/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfadyl <hfadyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:45:41 by hfadyl            #+#    #+#             */
/*   Updated: 2019/11/07 17:54:26 by hfadyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	if (!(r = (char *)malloc(sizeof(char) * (j + 1))))
		return (0);
	while (i < j)
	{
		r[i] = s1[i];
		i++;
	}
	r[j] = '\0';
	return (r);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*r;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (!(r = malloc(sizeof(char) * (i + j + 1))))
		return (0);
	while (*s1 != '\0')
		r[k++] = *s1++;
	while (*s2 != '\0')
		r[k++] = *s2++;
	r[k] = '\0';
	return (r);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char*)s);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!(s = malloc(count * size)))
		return (0);
	while (i < size * count)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
