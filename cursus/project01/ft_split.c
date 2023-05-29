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

//----------------funcion que encuentra todos los 'c' y retorne sus indices----------------
#include <stdlib.h>

int	*ft_find_index_of_c(char *s, int c, size_t n, size_t *count)
{
	unsigned char	c_to_find;
	size_t			i;
	size_t			j;
	int				*indices;
	int				*temp;

	c_to_find = (unsigned char)c;
	i = 0;
	j = 0;
	indices = NULL;
	*count = 0;
	while (i < n)
	{
		if (s[i] == c_to_find)
		{
			(*count)++;
			temp = (int *)malloc((*count) * sizeof(int));
			if (temp == NULL)
			{
				free(indices);
				return (NULL);
			}
			memcpy(temp, indices, (j) * sizeof(int));
			temp[j] = i;
			free(indices);
			indices = temp;
			j++;
		}
		i++;
	}
	return (indices);
}



//----------------funcion que cree substrings----------------



//----------------funcion que reserva memoria----------------



//----------------funcion principal split----------------
// char	**ft_split(char const *s, char c)
// {
// 	unsigned int	len_main_string;

// 	len_main_string = ft_strlen(s);
// 	return ("el nuevo array de strings generadas(doble puntero)");
// }

#include <stdio.h>

int main()
{
    const char *str = "Hello World 42 !";
    int character = ' ';
    size_t count;
    int *indices = ft_find_index_of_c((char *)str, character, ft_strlen(str), &count);
    printf("El carácter '%c' se encuentra en los siguientes índices:\n", character);
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", indices[i]);
    }
    printf("\n");
    free(indices);

    return 0;
}

