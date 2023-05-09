/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:12:31 by castorga          #+#    #+#             */
/*   Updated: 2023/05/09 14:12:34 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c, size_t len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i <= len)
		{
			str[i] = c;
		}
		i++;
	}
	return (*str);

}

/* memset example */
#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-' ,9);
	puts (str);
	printf("\n----------------------------");
	printf("%s", ft_memset(&str, '-', 9));

	return 0;
}