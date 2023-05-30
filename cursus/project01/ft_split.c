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

/*
//----------------funcion que reserva memoria----------------
static char	*ft_my_malloc(const char *src, size_t len)
{
	char	*dst;

	dst = malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	memcpy(dst, src, len);
	dst[len] = '\0';
	return (dst);
}

//---------funcion que encuentra todos los 'c' y retorna sus indices---------

static int	*ft_find_index_of_c(char *s, int c, size_t n)
{
	unsigned char	c_to_find;
	size_t			i;
	size_t			j;
	int				*indices;

	c_to_find = (unsigned char)c;
	i = 0;
	j = 0;
	indices = 0;
	while (i < n)
	{
		if (s[i] == c_to_find)
			(*indices)++;
		i++;
	}
	if (*indices == 0)
		return (NULL);
	indices = (int *)malloc((*indices) * sizeof(int));
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
	return (indices);
}

//----------------funcion principal split----------------
char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		*indices;
	char	**result;
	size_t	start;
	size_t	len;

	indices = ft_find_index_of_c((char *)s, c, strlen(s));
    result = (char **)malloc((2) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (s)
	{
		len = indices[i] - start;
		result[i] = ft_my_malloc(s + start, len);
		start = indices[i] + 1;
		i++;
	}
	//result[i] = ft_my_malloc(s + start, strlen(s) - start);
	result[i] = ft_my_malloc(s + start, indices[i-1] - start + 1); // Actualizar la longitud de la última subcadena
	result[i + 1] = NULL; // final de array de punteros
	free(indices);
	return (result);
return (NULL);
}
*/

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
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

	// char *str3 = "\0aa\0bbb";
	// int character3 = '\0';
	// //printf("Se espera: {"aa\0", "bbb\0", NULL}");
	// char **result3 = ft_split(str3, character3);

	// char *str4 = "split  ||this|for|me|||||!|";
	// int character4 = '|';
	// printf("Se espera: , 'split', 'this', 'for', 'me', '!'\n");
	// char **result4 = ft_split(str4, character4);

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