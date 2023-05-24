/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:41:52 by castorga          #+#    #+#             */
/*   Updated: 2023/05/24 09:41:55 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototipo 
char *ft_strjoin(char const *s1, char const *s2);

Parámetros 
s1: La primera string.
s2: La string a añadir a ’s1’.

Valor devuelto
La nueva string.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc

Descripción 
Reserva (con malloc(3)) y devuelve una nueva string, formada por la 
concatenación de ’s1’ y ’s2’.
*/


#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*space_reserved;
	unsigned int	i;
	unsigned int	len_s1;
	unsigned int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	space_reserved = malloc((len_s1 + len_s2) + 1);
	if (!space_reserved)
		return (NULL);

	if (len_s1 == NULL)
		return (s2);
	else if (len_s2 == NULL)
		return (s1);
	else
	{
		ft_strlcat(s2, s1, space_reserved);
		return (space_reserved);
	}
}

int	main(void)
{
	printf("")
	return (0);
}