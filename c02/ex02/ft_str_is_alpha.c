/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:55:50 by castorga          #+#    #+#             */
/*   Updated: 2023/04/10 18:30:03 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha_char;

	is_alpha_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || \
			(str[i] >= 'a' && str[i] <= 'z') || \
			(str[i] == '\0')))
		{
			is_alpha_char = 0;
			break ;
		}
		i++;
	}
	if (is_alpha_char == 1)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	song[] = "clarodieLuna";
	printf("%d", ft_str_is_alpha(song));
	return (0);
}*/
