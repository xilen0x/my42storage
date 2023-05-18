/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:47:39 by castorga          #+#    #+#             */
/*   Updated: 2023/05/18 15:34:02 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, oth-
     erwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that `\200' is greater than `\0',
     for example).  Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
     the returned value.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	unsigned int		i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{	
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*# include <stdio.h>

int	main(void)
{
	printf("\n--------- memcmp ---------\n");
	printf("%d\n", memcmp("test", "testss", 7));
	printf("%d\n", memcmp("testss", "test", 7));
	printf("%d\n", memcmp("", "test", 4));
	printf("%d\n", memcmp("test", "", 4));
	printf("%d\n", memcmp("abcdefgh", "abcdwxyz", 4));
	printf("%d\n", memcmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("%d\n", memcmp("test\200", "test\0", 6));
	
	printf("\n--------- ft_memcmp ---------\n");
	printf("%d\n", ft_memcmp("test", "testss", 7));
	printf("%d\n", ft_memcmp("testss", "test", 7));
	printf("%d\n", ft_memcmp("", "test", 4));
	printf("%d\n", ft_memcmp("test", "", 4));
	printf("%d\n", ft_memcmp("abcdefgh", "abcdwxyz", 4));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("%d\n", ft_memcmp("test\200", "test\0", 6));
}*/

/*
PARA AVERIGUAR DESPUES:
Pasa paco, pero la salida es distinta entre la original y la mia:
--------- memcmp ---------
-1
1
-1
1
0
0
1

--------- ft_memcmp ---------
-115
115
-116
116
0
0
128
*/