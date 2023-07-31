/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:30:57 by castorga          #+#    #+#             */
/*   Updated: 2023/07/31 15:31:00 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------
Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.
Your function must be declared as follows:
void	ft_swap(int *a, int *b);*/
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	*aux;

	*aux = *a;
	*a = *b;
	*b = *aux;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 800;
	printf("Antes del cambio: \na:%d \nb:%d\n", a, b);
	ft_swap(&a, &b);
	printf("\nDespues del cambio: \na:%d \nb:%d", a, b);
	return (0);
}
