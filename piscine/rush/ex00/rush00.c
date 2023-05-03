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

/* @brief     : Write x number of chars in one line.                          */
/*              The first and the last one could be diferent.                 */
/* @param x   : number of columns                                             */
/* @param fst : first char                                                    */
/* @param mdl : middle char                                                   */
/* @param lst : last char                                                     */
void	ft_write_chars_in_column(int x, char fst, char mdl, char lst)
{
	ft_putchar(fst);
	x--;
	if (x > 0)
	{
		while (x > 1)
		{
			ft_putchar(mdl);
			x--;
		}
		ft_putchar(lst);
		x--;
	}
	write(1, "\n", 1);
}

/* @brief   : Draw a (x,y) size rectangle                                     */
/* @param x : numbers of columns                                              */
/* @param y : numbars of rows                                                 */
void	rush(int x, int y)
{
	char	dash;
	char	space;
	char	circle;
	char	pipe;

	dash = 95;
	space = 32;
	circle = 111;
	pipe = 124;
	if (x > 0 && y > 0)
	{
		ft_write_chars_in_column(x, circle, dash, circle);
		y--;
		if (y > 0)
		{
			while (y > 1)
			{
				ft_write_chars_in_column(x, pipe, space, pipe);
				y--;
			}
			ft_write_chars_in_column(x, circle, dash, circle);
		}
	}
}
