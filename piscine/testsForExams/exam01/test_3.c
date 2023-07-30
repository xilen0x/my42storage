/*Write a program that displays the alphabet, with even letters in uppercase, and odd letters in lowercase, followed by a newline.*/

#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (a <= 'z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a + 2;
		b = b + 2;
	}
	write(1, "\n", 1);
	return (0);
}
