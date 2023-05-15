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
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  
	 The terminating null character is considered to be part of the string; 
	 therefore if c is `\0', the functions locate the terminating `\0'.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int c = 'm';
	char str[] = "holamundo";
	printf("character found: %s\n", strchr(str, c));

	char str2[] = "holamundo";
	printf("character found: %s\n", ft_strchr(str2, c));

	return (0);
}
