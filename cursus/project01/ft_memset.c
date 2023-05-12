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
