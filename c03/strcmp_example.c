/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:51:04 by castorga          #+#    #+#             */
/*   Updated: 2023/04/17 10:38:19 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_strcmp(char *s1, char *s2)
{
	
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hola";
    char str2[] = "adios";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (result < 0) {
        printf("resultado2: '%d' \n", result);
		printf("La cadena '%s' es menor que la cadena '%s'.\n", str1, str2);
    } else {
        printf("resultado3: '%d' \n", result);
		printf("La cadena '%s' es mayor que la cadena '%s'.\n", str1, str2);
    }

    return 0;
}

