/*
 Write a function that swaps the contents of two integers the adresses of which are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b); */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 6;
	printf("ANTES DEL CAMBIO:\n %d, %d", a, b);
	ft_swap(&a, &b);
	printf("\nDESPUES DEL CAMBIO:\n %d, %d\n", a, b);
	return (0);
}
