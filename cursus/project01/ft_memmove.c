/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:31:08 by castorga          #+#    #+#             */
/*   Updated: 2023/05/10 13:31:11 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	if (pdst > psrc)
	{
		while (len != 0)
		{
			len--;
			pdst[len] = psrc[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			pdst[i++] = psrc[i];
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	//printf("\n---------memmove-------------\n");
	//char src[] = "every programmer should know memmove!";
	//char dst[] = "**********";
	//printf("%s\n", (char *)memmove(dst + 4, src, 5));

	printf("\n---------ft_memmove----------\n");
	char src2[] = "every programmer should know memmove!";
	//char dst2[] = "**********";
	char dst2[10];
    printf("%s\n", (char *)ft_memmove(dst2, src2, 5));

	return (0);
}
*/
/*
---------memmove-------------
(in the case of: dst[] = "**********" and (dst + 4, src, 5))
every*
---------ft_memmove----------
(in the case of: dst2[] = "**********" and (dst + 4, src, 5))
every*

*/