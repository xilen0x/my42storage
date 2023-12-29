/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.
This function returns 1 if the given number is a power of 2, otherwise it returns 0.
Your function must be declared as follows:
int	    is_power_of_2(unsigned int n);
*/

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);

	while (n % 2 == 0)
		n /= 2;

	if (n == 1)
		return (1);

	return (0);
}

/*int	main(void)
{
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(16));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(64));
	printf("%d\n", is_power_of_2(5));
	return (0);
}*/

/*
$ ./a.out 
1
1
1
1
1
1
0
*/
