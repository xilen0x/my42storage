/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:22:53 by castorga          #+#    #+#             */
/*   Updated: 2023/05/19 16:22:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The isspace() function tests for the white-space characters.  For any
     locale, this includes the following standard characters:

     ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''

     In the "C" locale, isspace() successful test is limited to these charac-
     ters only.  The value of the argument must be representable as an
     unsigned char or the value of EOF.

RETURN VALUES
     The isspace() function returns zero if the character tests false and
     returns non-zero if the character tests true.
*/

char	*ft_isspace(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;

	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "   holamundo"; 
	printf("%s\n", ft_isspace(str));
}
