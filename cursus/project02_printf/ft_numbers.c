/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:29:04 by castorga          #+#    #+#             */
/*   Updated: 2023/07/07 10:29:09 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ----------- in case of number %d or %i-----------

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_len('-', len);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
}

// ----------- in case of unsigned int-----------
void	ft_unsigned_int(unsigned int nb, int *len)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_len(nb, len);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
	}
	ft_putchar_len(nb % 10 + '0', len);
}

// ----------- in case of hexadecimal -----------
void	ft_hexadecimal(unsigned int x, int *len, char op)
{
	char	str[20];
	char	*base;
	int		i;

	i = 0;
	if (op == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}


/*NOTA
manejar la opcion si write falla...if write = -1...algo asi
*/