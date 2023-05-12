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

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		i;
	char				*p;

	p = (char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
	printf("\n---------memset-------------*\n");
	char str[] = "every programmer should know memset!";
	printf("%s\n", (char *)memset(str, 'x' , 4));

	char str2[] = "every programmer should know memset!";
	printf("\n---------ft_memset----------*\n");
	printf("%s", (char *)ft_memset(str2, 'x', 4));

	return 0;
}
*/
/*
---------memset-------------*
xxxxy programmer should know memset!

---------ft_memset----------*
xxxxy programmer should know memset!

*/