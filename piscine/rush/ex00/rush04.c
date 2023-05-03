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

void	rush(int x, int y)
{
	char	letter_b;
	char	ke;
	char	letter_a;
	char	letter_c;
	char	letter_b_central;

	letter_b = 'B';
	ke = ' ';
	letter_a = 'A';
	letter_c = 'C';
	letter_b_central = 'B';
	if (x > 0 && y > 0)
	{
		fun_columnas_fila(x, letter_a, letter_b, letter_c);
		y = y - 1;
		if (y > 0)
		{
			while (y > 1)
			{
				fun_columnas_fila(x, letter_b_central, ke, letter_b_central);
				y = y - 1;
			}
			fun_columnas_fila(x, letter_c, letter_b, letter_a);
		}
	}
}
