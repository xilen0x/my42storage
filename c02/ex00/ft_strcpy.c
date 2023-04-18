/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 10:07:46 by castorga          #+#    #+#             */
/*   Updated: 2023/04/10 12:13:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*#include <stdio.h>*/
//#include <string.h>
/*int	main(void)
{
	char	source[] = "welcome1234567891011121314151617181920";
	char destination[] = "destination";

	printf("%s", ft_strcpy(destination, source));

	return (0);
}
*/