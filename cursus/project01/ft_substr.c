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
	Reserva memoria y devuelve una substring de	la string principal ’s’.
	La substring empieza desde el índice ’start’ y tiene una longitud
	máxima ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*space_reserved;
	unsigned int	i;

	i = 0;
	
	if (start >= ft_strlen(s))
		len = 0;// len se establece en 0 para indicar una subcadena vacía.
	
	//de lo contrario si ..., len se establece en el número de caracteres restantes desde start hasta el final de s.	
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	
	//asignacion de memoria
	space_reserved = malloc(sizeof(char) * (len + 1));
	//si falla la asignacion, retorno NULL
	if (!space_reserved)
		return (NULL);
	//mientras i sea menor que len y el carácter en la posición start de s no sea un terminador nulo.
	while (i < len && s[start])
	{
	//copia de caracteres desde 's' a 'space_reserved'.
		space_reserved[i] = s[start];
		i++;
		start++;
	}
	space_reserved[i] = '\0';
	return (space_reserved);
}

/*
int	main(void)
{
	//en este ej. imprime del string, despues del 3er caracter, los 4 caracteres siguientes
	printf("%s\n", ft_substr("holamundo", 3, 4));
	return (0);
}*/
