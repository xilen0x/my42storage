/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:46:42 by castorga          #+#    #+#             */
/*   Updated: 2023/05/24 15:46:45 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parámetros 
s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.

Valor devuelto
La string recortada.
NULL si falla la reserva de memoria.

Descripción
Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3
*/

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	i;
	const char		*start;
	const char		*end;
	char			*str;

	i = 0;
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (ft_isset(*start, set))
		start++;
	while (ft_isset(*end, set))
		end--;
	len = end - start + 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = start[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}


int	main(void)
{
	printf("***%s***\n", ft_strtrim(" holamundo ", " "));
	printf("***%s***\n", ft_strtrim("           ", " "));
	return (0);
}
