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

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	char			**result;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			const char *end = ft_memchr(s + i, c);
			size_t len = (end) ? (size_t)(end - (s + i)) : strlen(s + i);
			result[count] = ft_substr(s, i, len);
			if (!result[count])
			{
				while (count > 0)
				{
					count--;
					free(result[count]);
				}
				free(result);
				return (NULL);
			}
			count++;
			i += len;
		}
		else
		{
			i++;
		}
	}
	result[count] = NULL;
	return (result);
}

int	main(void)
{
	char	**split_result;
	
	split_result = ft_split("hola-mundo-42", '-');
	if (!split_result)
	{
		printf("Error: falló la reserva de memoria.\n");
		return (1);
	}

	int i = 0;
	while (split_result[i])
	{
		printf("%s\n", split_result[i]);
		free(split_result[i]);
		i++;
	}
	free(split_result);
	return (0);
}
