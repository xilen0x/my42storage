/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:29:06 by castorga          #+#    #+#             */
/*   Updated: 2023/08/01 10:29:09 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int		len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len >= 0)
		{
			write (1, &argv[1][len], 1);
			len--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
