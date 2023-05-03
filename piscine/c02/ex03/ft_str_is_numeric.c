/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:38:50 by castorga          #+#    #+#             */
/*   Updated: 2023/04/11 16:38:58 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	is_always_digit;

	is_always_digit = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (!((str[count] >= '0' && str[count] <= '9') || (str[count] == '\0')))
		{
			is_always_digit = 0;
			break ;
		}
		count++;
	}
	if (is_always_digit == 1)
		return (1);
	return (0);
}
