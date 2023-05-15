/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:23:37 by castorga          #+#    #+#             */
/*   Updated: 2023/05/04 10:23:41 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns 1 if the input is a number or a letter in the ASCII table*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	return (0);
}
