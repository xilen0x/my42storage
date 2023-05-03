/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:09:30 by castorga          #+#    #+#             */
/*   Updated: 2023/04/12 13:09:37 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase("HOLAMUNDOCENCUARENTAYDOS"));
    printf("\n%d", ft_str_is_uppercase("holAMundo C en 42 Barcelona"));
    printf("\n%d", ft_str_is_uppercase("hola * mundo + C 42 CAstorga"));
    printf("\n%d", ft_str_is_uppercase("132456789"));
	printf("\n%d\n", ft_str_is_uppercase(""));
}
*/
