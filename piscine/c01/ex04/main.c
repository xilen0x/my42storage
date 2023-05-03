# include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int	x;
	int	y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Despues de aplicar la funcion el valor de x es: %d y el de y es: %d \n", x, y);
}
