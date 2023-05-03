/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:41:09 by castorga          #+#    #+#             */
/*   Updated: 2023/04/11 11:42:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*str_lower_case(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		count;
	int		is_cap;

	count = 0;
	is_cap = 1;
	str_lower_case(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (is_cap == 1)
				str[count] = str[count] - 32;
				is_cap = 0;
		}
		else if (str[count] >= '0' && str[count] <= '9')
			is_cap = 0;
		else
			is_cap = 1;
		count++;
	}
	return (str);
}

/*
int	main(void)
{
	char message[] = "hola mundo 42 desde barcelona al mundo";
	char another_message[] = "Lorem ipsum dolor sit amet, consecteuri elit. ";
	printf("%s\n", ft_strcapitalize(message));
	printf("%s\n", ft_strcapitalize(another_message));
}
*/