/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 09:23:37 by castorga          #+#    #+#             */
/*   Updated: 2023/03/30 09:23:41 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	entero_positivo;
	char	entero_negativo;

	entero_positivo = 'P';
	entero_negativo = 'N';
	if (n < 0)
	{
		write(1, &entero_negativo, 1);
	}
	else
	{
		write(1, &entero_positivo, 1);
	}
}
