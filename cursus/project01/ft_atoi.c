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

static const char	*ft_isspace(const char *str)
{
	// checking the different spaces
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	return (str);
}

static const char	*ft_isminusorplus(const char *str, unsigned int *parity)
{
    *parity = 0;

    // skipping the + and -
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            (*parity)++;
        str++;
    }
    return str;
}


int ft_atoi(const char *str)
{
	unsigned int parity = 0;
	int number = 0;

    str = ft_isspace(str);
    str = ft_isminusorplus(str, &parity);

	// check the numbers
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0'; // convert char to int
		str++;
	}

	// is the value odd (par)?
	if (parity % 2 == 1)
		return number;
	else
		return -number;
}

int main(void)
{
	const char *s = "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
	return 0;
}
