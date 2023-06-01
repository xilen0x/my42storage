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

/* Saves the given number as a string (char array) */

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

static size_t	ft_numlen(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

// char	*ft_itoa(int n)
// {
// 	//int str;

// 	str = ft_numlen(n);
// 	return (str);
// }

int main()
{
    int number = -12345;
    //char *str_number = ft_itoa(number);
    printf("Number: %d\n", number);
    printf("%zu", ft_numlen(number));
	//printf("String: %s\n", str_number);
    //free(str_number);
    return 0;
}	