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

//----------------funcion que reserva memoria----------------
static int	*ft_my_malloc(size_t *count)
{
	int	*temp;

	temp = (int *)malloc((*count) * sizeof(int));
	if (temp == NULL)
		return (NULL);
	return (temp);
}

//---------funcion que encuentra todos los 'c' y retorna sus indices---------

static int	*ft_find_index_of_c(char *s, int c, size_t n, size_t *count)
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
			temp = ft_my_malloc(count);
			ft_memcpy(temp, indices, j * sizeof(int));
			indices = temp;
			indices[j] = i;
			j++;
		}
		i++;
	}
	return (indices);
}

//----------------funcion principal split----------------
char	**ft_split(char const *s, char c)
{
	size_t			count;
	size_t			i;
	int				*indices;
	char			**result;

	indices = ft_find_index_of_c((char *)s, c, ft_strlen(s), &count);
	result = (char **)malloc((count + 2) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (indices && i <= count)
	{
		//result[i] = ft_substr(s, indices[i], (indices[i + 1]) - indices[1]);
		//result[i] = ft_strdup((char *)&s[indices[i]]);
		result[i] = strndup(s + indices[i], indices[i + 1] - indices[i] - 1);
		i++;
	}
	result[i] = NULL;//final de array de punteros
	free(indices);
	return (result);
}


int main()
{
    char *str = "0123-567-9!";
    int character = '-';
    char **result = ft_split(str, character);
    if (result)
    {
        printf("El resultado es:\n");
        size_t i = 0;
        while (result[i])
        {
            printf("%s\n", result[i]);
            i++;
        }
        // Liberar la memoria asignada a las subcadenas y al arreglo de punteros
        i = 0;
        while (result[i])
        {
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}
