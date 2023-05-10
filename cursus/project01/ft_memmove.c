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
	unsigned int	i;
	unsigned char	*psrc;
	unsigned char	*pdst;

	if (dst == NULL && src == NULL)
		return (NULL);
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	if (pdst > psrc)
	{
		i = len;
		while (i > 0)
		{
			pdst[i - 1] = psrc[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
	// printf("\n---------memmove-------------*\n");
	char src[] = "almost every programmer should know memmove!";
	//char dst[] = "  ";
	//printf("%s\n", (char *)memmove(dst, src, 3));

	char dst2[] = "  ";
	printf("\n---------ft_memmove----------*\n");
	printf("%s", (char *)ft_memmove(dst2, src, 3));

	return 0;
}*/