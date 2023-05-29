/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:11:11 by castorga          #+#    #+#             */
/*   Updated: 2023/05/26 10:11:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototipo
char **ft_split(char const *s, char c);

Parámetros
s: La string a separar.
c: El carácter delimitador.

Valor devuelto
El array de nuevas strings resulatente de la separación.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc, free

Descripción
Reserva (utilizando malloc(3)) un array de strings resultante de separar
la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
El array debe terminar con un puntero NULL.
*/
# include "libft.h"

//----------------funcion que encuentre todos los 'c' y retorne los indices----------------
static char	*ft_find_c_create_substr(const void *s, int c, size_t n)
{
	const unsigned char	*my_string;
	unsigned char		c_to_find;
	unsigned int		i;
	unsigned char		*new_string;

	my_string = (const unsigned char *)s;
	c_to_find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*my_string == c_to_find)
		{//si se encontro el '-' --> crea la substring
			new_string[i] = ft_substr((char)s, i, 1);
		}
		my_string++;
		i++;
	}
	return (new_string);
}


//----------------funcion que cree substrings----------------



//----------------funcion que reserva memoria----------------



//----------------funcion principal split----------------
char	**ft_split(char const *s, char c)
{
	unsigned int	len_main_string;

	len_main_string = ft_strlen(s);
	return ("el nuevo array de strings generadas(doble puntero)");
}

int	main(void)
{
	printf("%s\n", ft_split("hola-mundo-42", '-'));
	return (0);
}