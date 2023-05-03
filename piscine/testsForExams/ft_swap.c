/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:31:11 by castorga          #+#    #+#             */
/*   Updated: 2023/04/14 10:48:43 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

}

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 5;
	printf("Antes de funcion: %d %d", a, b);
	ft_swap(&a, &b);
	printf("\nDespues de funcion: %d %d", a, b);
	return (0);
}
