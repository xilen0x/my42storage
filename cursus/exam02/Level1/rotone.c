/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:26:17 by castorga          #+#    #+#             */
/*   Updated: 2023/08/01 12:26:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	aux;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				if (argv[1][i] == 'z')
					write (1, "a", 1);
				else if (argv[1][i] == 'Z')
					write (1, "A", 1);
			}
			else if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || 
			(argv[1][i] >= 'A' && argv[1][i] < 'Z'))
			{
				aux = argv[1][i] + 1;
				write (1, &aux, 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
