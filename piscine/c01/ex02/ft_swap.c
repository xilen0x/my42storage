/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:43:29 by castorga          #+#    #+#             */
/*   Updated: 2023/04/06 17:43:35 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *number_a, int *number_b)
{
	int	my_swap;

	my_swap = *number_a;
	*number_a = *number_b;
	*number_b = my_swap;
}
