/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:38:38 by castorga          #+#    #+#             */
/*   Updated: 2023/05/15 13:38:41 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strchr(): Locates a character in a string. This finds the first occurrence
 of the desired character in a string.
*/
#include "libft.h"

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

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int c = 'x';
	char str[] = "holamundo";
	printf("character found: %s\n", strchr(str, c));

	char str2[] = "holamundo";
	printf("character found: %s\n", ft_strchr(str2, c));

	return (0);
}*/
/*
output:
when int c = 'm':
character found: mundo
character found: mundo

when int c = 'x':
character found: (null)
character found: (null)
*/