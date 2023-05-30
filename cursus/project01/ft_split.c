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
// static int	*ft_my_malloc(size_t *count)
// {
// 	int	*temp;

// 	temp = (int *)malloc((*count) * sizeof(int));
// 	if (temp == NULL)
// 		return (NULL);
// 	return (temp);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//----------------funcion que reserva memoria----------------
static char *ft_my_strdup(const char *src, size_t len)
{
    char *dst = malloc(len + 1);
    if (dst == NULL)
        return NULL;
    memcpy(dst, src, len);
    dst[len] = '\0';
    return dst;
}

//---------funcion que encuentra todos los 'c' y retorna sus indices---------

static int *ft_find_index_of_c(char *s, int c, size_t n, size_t *count)
{
    unsigned char c_to_find = (unsigned char)c;
    size_t i = 0;
    size_t j = 0;
    int *indices = NULL;

    *count = 0;
    while (i < n)
    {
        if (s[i] == c_to_find)
            (*count)++;
        i++;
    }

    if (*count == 0)
        return NULL;

    indices = (int *)malloc((*count) * sizeof(int));
    if (indices == NULL)
        return NULL;

    i = 0;
    while (i < n)
    {
        if (s[i] == c_to_find)
        {
            indices[j] = i;
            j++;
        }
        i++;
    }

    return indices;
}

//----------------funcion principal split----------------
char **ft_split(char const *s, char c)
{
    size_t count;
    size_t i;
    int *indices;
    char **result;

    indices = ft_find_index_of_c((char *)s, c, strlen(s), &count);
    result = (char **)malloc((count + 2) * sizeof(char *));
    if (!result)
        return NULL;

    i = 0;
    size_t start = 0;
    while (i < count)
    {
        size_t len = indices[i] - start;
        result[i] = ft_my_strdup(s + start, len);
        start = indices[i] + 1;
        i++;
    }
    result[i] = ft_my_strdup(s + start, strlen(s) - start);
    result[i + 1] = NULL; // final de array de punteros

    free(indices);
    return result;
}

int main()
{
    char *str = "hola mundo 42 Chile";
    int character = ' ';
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
        // i = 0;
        // while (result[i])
        // {
        //     free(result[i]);
        //     i++;
        // }
        // free(result);
    }

    return 0;
}
