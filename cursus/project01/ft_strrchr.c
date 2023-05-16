/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:37:26 by castorga          #+#    #+#             */
/*   Updated: 2023/05/16 12:37:29 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.
	 (Looks for a given character in a string, reading it from back to front)*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	int c = 'x';
	char str[] = "holamundo";
	printf("character found: %s\n", strrchr(str, c));

	char str2[] = "holamundo";
	printf("character found: %s\n", ft_strrchr(str2, c));

	return (0);
}*/