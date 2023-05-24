/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isminusorplus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:53:21 by castorga          #+#    #+#             */
/*   Updated: 2023/05/19 16:53:23 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_isminusorplus(int *str)
// {
// 	unsigned int	parity;

// 	// skiping the + and -
// 	while (*str == '+' || *str == '-')
// 	{
// 		if (*str == '-')//save the quantity of '-'
// 			parity++;
// 		++str;
// 	}
// 	return (0);//entiendo q debe retornar el str...???

// }
char	*ft_skip_sign(char *str)
{
	unsigned int	count_minus;

	// skiping the + and -
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')//save the quantity of '-'
			count_minus++;
		++str;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "+++---holamundo"; 
	printf("%s\n", ft_skip_sign(str));
}
