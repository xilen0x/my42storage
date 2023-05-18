/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:13:06 by castorga          #+#    #+#             */
/*   Updated: 2023/04/17 13:45:59 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i <= n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
		else
			return (-1);
	}
	return (0);
}


#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("hola", "hola", 4));
	printf("%d\n", ft_strncmp("hola", "hombre", 3));
	printf("%d\n", ft_strncmp("hola", " ", 8));
	printf("----------\n");
	printf("%d\n", strncmp("hola", "hola", 4));
	printf("%d\n", strncmp("hola", "hombre", 3));
	printf("%d\n", strncmp("hola", " ", 8));
}
