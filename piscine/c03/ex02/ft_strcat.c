/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:46:34 by castorga          #+#    #+#             */
/*   Updated: 2023/04/18 12:11:24 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
      i++;
    }
    while (src[j] != '\0')
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
    printf("----output ft_strcat function----\n");
    char src[] = "origen";
    char dest[20] = "destino";
   	printf("%s\n", ft_strcat(dest, src));
    
    char src2[] = "origen";
    char dest2[20] = "destino";
   	
	
	printf("----output strcat function----\n");
	printf("%s\n", strcat(dest2, src2));
	return (0);
}
