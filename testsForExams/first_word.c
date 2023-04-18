/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:28:30 by castorga          #+#    #+#             */
/*   Updated: 2023/04/14 14:52:06 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	tab_or_space;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 0 && (argv[1][i] == '\t' || argv[1][i] ==' '))
		{
			i++;
		}
		while (argv[1][i] != 0 && (argv[1][i] != '\t' &&  argv[1][i] != ' '))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
