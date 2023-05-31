/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:53:49 by castorga          #+#    #+#             */
/*   Updated: 2023/05/30 15:53:52 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Saves the given number as a string (char array)*/

/*
Prototipo 
char *ft_itoa(int n);

Parámetros 
n: el entero a convertir.

Valor devuelto 
La string que represente el número.
NULL si falla la reserva de memoria.

Funciones autorizadas
malloc

Descripción 
Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
*/
# include "libft.h"

static void	calc_size(long int n, size_t *size)
{
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		*size += 1;
		n /= 10;
	}
	*size += 1;
}

static void	create_str(char *str, long int n, size_t size)
{
	size_t	i;
	size_t	j;
	int		c;

	i = 0;
	j = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i++;
		j++;
	}
	while (size > j)
	{
		c = (n % 10);
		str[size - 1] = c + '0';
		n = n / 10;
		i++;
		size--;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;

	size = 0;
	if (n < 0)
		size = 1;
	calc_size(n, &size);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	create_str(str, n, size);
	return (str);
}

int main()
{
    int number = -12345;
    char *str_number = ft_itoa(number);
    printf("Number: %d\n", number);
    printf("String: %s\n", str_number);
    free(str_number);
    return 0;
}