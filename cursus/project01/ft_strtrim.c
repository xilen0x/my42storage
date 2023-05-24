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

# include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			space_reserved;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = len - 1;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	//mientras i <= a mitad de s1 y no se encuentre el caracter q hay en s1[i]
	while ((i <= (len / 2)) && (!ft_strchr(set, s1[i])))
		i++;
	while ((j >= (len / 2)) && (!ft_strchr(set, s1[j])))
		j--;
	//si i > j , significa que todos los caracteres de s1 están presentes en set,	
	if (i > j)
		return (ft_strdup(""));//retorno una cadena vacia
	//calculo la nueva longitud de len
	len = j - i;
	//Se obtiene la subcadena de s1 que comienza en el índice i y tiene una longitud de len + 1. 
	return (ft_substr(s1, i, len + 1));
}

int	main(void)
{
	printf("%s\n", ft_strtrim(" holamundo ", " "));

	return (0);
}
/*
% cc ft_strtrim.c ft_strlen.c ft_strchr.c ft_substr.c ft_strdup.c 
castorga@car15s3 project01 % ./a.out 
zsh: segmentation fault  ./a.out


El error de segmentación (segmentation fault) que estás experimentando indica que se está accediendo a una memoria no
 válida durante la ejecución de tu programa. Esto puede ocurrir cuando hay errores en la gestión de punteros o en el acceso a datos.
*/