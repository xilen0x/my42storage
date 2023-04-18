/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:21:45 by castorga          #+#    #+#             */
/*   Updated: 2023/04/18 13:39:36 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
      i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main ()
{
    printf("----output ft_strncat function----\n");
    char src[20] = "origen";
    char dest[20] = "destino";
	int	nb = 4;
   	printf("%s\n", ft_strncat(dest, src, nb));

    char src2[20] = "origen";
    char dest2[20] = "destino";
	int nb2 = 4;
	printf("----output strncat function----\n");
	printf("%s\n", strncat(dest2, src2, nb2));
	return (0);
}
