/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:19:21 by castorga          #+#    #+#             */
/*   Updated: 2023/07/18 16:20:50 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *string)
{
	int	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}

char	*ft_strdup(const char *string)
{
	int		i;
	int		size;
	char	*duplicate;

	i = 0;
	size = ft_strlen(string);
	duplicate = malloc(sizeof(char) * (size + 1));
	if (!duplicate)
		return (0);
	while (string[i])
	{
		duplicate[i] = string[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_to_find;

	c_to_find = c;
	while (*s != c_to_find)
	{
		if (*s == 0)
			return (0);
		s++;
	}
	return ((char *)s);
}

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*space_reserved;
	unsigned int	len_s1;
	unsigned int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == 0 && s2 == 0)
		return (0);
	space_reserved = malloc((len_s1 + len_s2) + 1);
	if (!space_reserved)
		return (0);
	else
	{
		ft_strncpy(space_reserved, (char *)s1, len_s1);
		ft_strncpy(space_reserved + len_s1, (char *)s2, len_s2);
		space_reserved[len_s1 + len_s2] = '\0';
		return (space_reserved);
	}
}
