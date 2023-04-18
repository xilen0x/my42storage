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

void	fun_columnas_fila_inicial(int x, char ks1, char ks2, char ka)
{
	ft_putchar(ks1);
	x = x - 1;
	if (x > 0)
	{
		while (x > 1)
		{
			ft_putchar(ka);
			x = x - 1;
		}
		ft_putchar(ks2);
	}
}

void	fun_columnas_fila_intermedia(int x, char ke, char ka)
{
	ft_putchar(ka);
	x = x - 1;
	if (x > 0)
	{
		while (x > 1)
		{
			ft_putchar(ke);
			x = x - 1;
		}
		ft_putchar(ka);
	}
}

void	fun_columnas_fila_final(int x, char ks1, char ks2, char ka)
{
	ft_putchar(ks2);
	x = x - 1;
	if (x > 0)
	{
		while (x > 1)
		{
			ft_putchar(ka);
			x = x - 1;
		}
		ft_putchar(ks1);
	}
}

void	rush01(int x, int y)
{
	char	ka;
	char	ke;
	char	ks1;
	char	ks2;

	ka = '*';
	ke = ' ';
	ks1 = 47;
	ks2 = 92;
	if (x <= 0 || y <= 0)
		write(1, "\n", 1);
	fun_columnas_fila_inicial(x, ks1, ks2, ka);
	write(1, "\n", 1);
	y--;
	while (y > 1)
	{
		fun_columnas_fila_intermedia(x, ke, ka);
		write(1, "\n", 1);
	y--;
	}
	if (y == 1)
		fun_columnas_fila_final(x, ks1, ks2, ka);
	write(1, "\n", 1);
}
