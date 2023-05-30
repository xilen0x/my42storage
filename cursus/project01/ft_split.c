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

#include "libft.h"
/* función q calcula la longitud real de una cadena saltando los carecteres repetidos de 'c'.*/
static size_t	ft_real_strlen(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			++counter;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (counter);
}

char	**ft_split(const char *s, char c)
{
	char	**array_strings;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	array_strings = malloc(sizeof(char *) * (ft_real_strlen(s, c) + 1));
	if (!array_strings)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			array_strings[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	array_strings[i] = 0;
	return (array_strings);
}

/*
int	main(void)
{
	// char *str0 = "hola mundo 42 Chile";
	// printf("Se espera: , 'hola', 'mundo', '42', 'Chile'\n");
	int character = ' ';
	// char **result = ft_split(str0, character);

	//char *str1 = "      split       this for   me  !       ";
	//printf("Se espera: , 'split', 'this', 'for', 'me', '!'\n");
	//char **result1 = ft_split(str1, character);

	char *str2 = "                  olol";
	printf("Se espera: , 'olol'\n");
	char **result2 = ft_split(str2, character);

	// if (result)
	// {
	// 	size_t i = 0;
	// 	while (result[i])
	// 	{
	// 		printf("%s\n", result[i]);
	// 		i++;
	// 	}
	// }
	
	if (result2)
	{
		size_t i = 0;
		while (result2[i])
		{
			printf("%s\n", result2[i]);
			i++;
		}
	}
        // Liberar la memoria asignada a las subcadenas y al arreglo de punteros
        // i = 0;
        // while (result[i])
        // {
        //     free(result[i]);
        //     i++;
        // }
        // free(result);
		
    return (0);
}
*/