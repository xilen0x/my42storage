/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:05:19 by castorga          #+#    #+#             */
/*   Updated: 2023/05/19 16:05:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reads a String, and, after ignoring spaces with ft_isspace, saves the string 
into an integer*/

/*
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
     by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

IMPLEMENTATION NOTES
     The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.

     The strtol() and strtol_l() functions are recommended instead of atoi()
     and atoi_l() functions, especially in new code.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	short	parity;
	int		number;

	number = 0;
	parity = 0;

	str = ft_isspace(str);//algo asi
	str = ft_isminusorplus(str);//idem

	// check the numbers
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;//convert char to int
		++str;
	}
// is the value even(par)?
	if (! (parity % 2))
		return (number);
	return (-number);
	
}
	return (0);
}

int	main(void)
{
	char	*s = "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
	return (0);
}