/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apardo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:27:42 by apardo-m          #+#    #+#             */
/*   Updated: 2023/04/01 22:23:17 by apardo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/* --- commentary in english---*/
void	fun_columnas_fila(int a, char pri, char seg, char ter)
{
	ft_putchar(pri);
	a = a - 1;
	if (a > 0)
	{
		while (a > 1)
		{
			ft_putchar(seg);
			a = a - 1;
		}
		ft_putchar(ter);
		a = a - 1;
	}
	write(1, "\n", 1);
}

/* --- commentary in english ---*/
void	rush(int x, int y)
{
	char	ka;
	char	ke;
	char	ks1;
	char	ks2;

	ka = '*';
	ke = ' ';
	ks1 = 47;
	ks2 = 92;
	if (x > 0 && y > 0)
	{
		fun_columnas_fila(x, ks1, ka, ks2);
		y = y - 1;
		if (y > 0)
		{
			while (y > 1)
			{
				fun_columnas_fila(x, ka, ke, ka);
				y = y - 1;
			}
			fun_columnas_fila(x, ks2, ka, ks1);
		}
	}
}
