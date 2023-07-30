/*Write a program that displays the alphabet in reverse, with even letters in uppercase, and odd letters in lowercase, followed by a newline.
Example:
$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int	main(void)
{
	char	z;
	char	y;

	z = 'z';
	y= 'Y';
	while (y >= 'A')
	{
		write(1, &z, 1);
		write(1, &y, 1);
		z = z - 2;
		y = y - 2;
	}
	write(1, "\n", 1);
	return (0);
}

