/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:23:46 by castorga          #+#    #+#             */
/*   Updated: 2023/06/02 12:23:51 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototipo 
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Parámetros 
s: La string que iterar.
f: La función a aplicar sobre cada carácter.

Valor devuelto 
La string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc

Descripción 
A cada carácter de la string ’s’, aplica la función ’f’ dando como 
parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. 
Genera una nueva string con el resultado del uso sucesivo de ’f’
*/
/*
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

	return (s);
}*/