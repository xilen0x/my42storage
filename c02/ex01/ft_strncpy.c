/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:56:34 by castorga          #+#    #+#             */
/*   Updated: 2023/04/10 15:56:42 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
		dest[i] = src[i];
		i++;	
    }
	//printf("\niteraciones de i despues de primer while: %d \n", i);
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	//printf("\niteraciones de i despues de segundo while: %d \n", i);
    return dest;
}

/*int main()
{
	char source[] = "welcome";
	char destination[] = "destination";
	int	n = 11;
    ft_strncpy(destination, source, n);
	printf("%s\n", destination);
    return (0);
}*/
