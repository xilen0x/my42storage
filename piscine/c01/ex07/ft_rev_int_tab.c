/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:45:52 by castorga          #+#    #+#             */
/*   Updated: 2023/04/06 17:45:57 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	aux;

	counter = 0;
	while (counter < (size / 2))
	{
		aux = tab[counter];
		tab[counter] = tab[(size -1) - counter];
		tab[(size -1) - counter] = aux;
		counter++;
	}
}
