#include <stdio.h>

int resta(int num1, int *num2) {
	int res = num1 - *num2;
	return res;
}

int	main(void)
{
	int	a;
	int	b;
	int	resultado;

	a = 50;
	b = 40;

	resultado = resta(a, &b);

	printf("resultado es %d \n", resultado);

	printf("direccion de memoria de resultado es %p \n", &resultado);

}
