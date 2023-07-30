/* Write a program that displays all digits in descending order, followed by a newline. */

#include <unistd.h>

int	main(void)
{
	char	c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	return (0);
}
