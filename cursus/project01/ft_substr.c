/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:12:46 by castorga          #+#    #+#             */
/*   Updated: 2023/05/23 13:12:51 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros: 
	s	  : La string desde la que crear la substring.
	start : El índice del caracter en ’s’ desde el que empezar la substring.
	len	  : La longitud máxima de la substring.

Valor devuelto:
	La substring resultante.
	NULL si falla la reserva de memoria.

Funciones autorizadas
	malloc

Descripción
	Reserva (con malloc(3)) y devuelve una substring de	la string ’s’.
	La substring empieza desde el índice ’start’ y tiene una longitud
	máxima ’len’.
*/

/* Copies from the n-th char of a string */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*space_reserved;
	unsigned int	i;

	i = 0;
	space_reserved = malloc(sizeof(char) * (len + 1));

	if ((start > len) || (!s) || (!space_reserved) || start >= ft_strlen(s))
		return (NULL);
	else
	{
		while (i < len && s[start])
		{
			space_reserved[i] = s[start];
			i++;
			start++;
		}
		space_reserved[i] = '\0';
		return (space_reserved);
	}
}

/*
int	main(void)
{
	printf("%s\n", ft_substr("holamundo", 3, 4));
	return (0);
}
*/