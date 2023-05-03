/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:59:42 by castorga          #+#    #+#             */
/*   Updated: 2023/04/12 11:54:15 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	j;

	count = 0;
	j = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
		return (count);
	while (j < size - 1 && j < count)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (count);
}

/*#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}*/

/*int	main(void)
{
	char	source[] = "welcome1234567891011121314151617181920";
	char destination[] = "destination";
	unsigned int	size = 0;
	unsigned int	len = ft_strlcpy(destination, source, size);

	printf("La cadena de origen es: %s\n", source);
	printf("La cadena de destino es: %s\n", destination);
	printf("La longitud de la cadena de origen es: %d\n", ft_strlen(source));
	printf("La longitud de la cadena de destino es: %d\n", ft_strlen(destination));
	printf("La longitud de la cadena copiada es: %d\n", len);

	return (0);
}
*/