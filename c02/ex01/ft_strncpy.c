/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:56:34 by castorga          #+#    #+#             */
/*   Updated: 2023/04/17 16:24:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned int	n = 13;

	char	source[] = "welcome1234567891011121314151617181920";
	char destination[] = "destination";

	ft_strncpy(destination, source, n);
	printf("%s\n", destination);
//	printf("Longitud de la cadena de origen es: %d\n", ft_strlen(source));
//	printf("Longitud de la cadena de destino es: %d\n", ft_strlen(destination));
	return (0);
}
*/
