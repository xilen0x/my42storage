/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------
Write the following function:
int		max(int* tab, unsigned int len);
The first parameter is an array of int, the second is the number of elements in
the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.
*/

int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	max = 0;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 333, 4, 5, 6, 7, 8, 9};

	printf("%d\n", max(tab, 9));
	return (0);
}
*/