/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet -= i;
		}
		else
			write(1, "0", 1);
		i /= 2;
	}
}
#include<stdio.h>

int	main(void)
{
	print_bits(0);
	printf("\n");
	print_bits(1);
	printf("\n");
	print_bits(2);
	printf("\n");
	print_bits(3);
	return (0);
}
