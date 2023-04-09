// /*My main for test C01*/

//for i in {00..08}; do cp main.c ../Desktop/evalcam/ex$i/; done

// /*ex00*/
#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int *p_value;
	int value;

   	value = 100;
	p_value = &value;
	printf("El valor de value es: %d\n", value);
	ft_ft(p_value);
	printf("El valor de value despues de funcion es: %d\n", value);
	return (0);
}
// /*ex01*/
// void	ft_ultimate_ft(int *********nbr)
// {
// 	*********nbr = 42;
// }

// int	main()
// {
// 	int n;
// 	int *nbr8;
// 	int **nbr7;
// 	int ***nbr6;
// 	int ****nbr5;
// 	int *****nbr4;
// 	int ******nbr3;
// 	int *******nbr2;
// 	int ********nbr1;
// 	int *********nbr;


// 	n = 21;

// 	nbr8 = &n;
// 	nbr7 = &nbr8;
// 	nbr6 = &nbr7;
// 	nbr5 = &nbr6;
// 	nbr4 = &nbr5;
// 	nbr3 = &nbr4;
// 	nbr2 = &nbr3;
// 	nbr1 = &nbr2;
// 	nbr = &nbr1;


// 	ft_ultimate_ft(nbr);
// 	printf("%d", n);
// 	return 0;
// }
// /*ex02*/
// void ft_swap(int *a, int *b);

// int	main()
// {
// 	int	x;
// 	int	y;
	
// 	x = 2;
// 	y = 3;
// 	printf("Valor inicial de x:%d \n", x);
// 	printf("Valor inicial de y:%d \n", y);
	
// 	ft_swap(&x, &y);
	
// 	printf("Valor posterior de x:%d \n", x);
// 	printf("Valor posterior de y:%d \n", y);
		
// }
// /*ex03*/
// void ft_div_mod(int a, int b, int *div, int *mod);

// int	main()
// {
// 	int a;
// 	int b;
// 	int x;
// 	int y;

// 	a = 10;
// 	b = 5;
// 	ft_div_mod(a, b, &x, &y);
// 	printf("%d\n", x);
// 	printf("%d", y);
// }
// /*ex04*/
// void ft_ultimate_div_mod(int *a, int *b);

// int main()
// {
// 	int	x;
// 	int	y;

// 	x = 15;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("Despues de aplicar la funcion el valor de x es: %d y el de y es: %d \n", x, y);
// }
// /*ex05*/
// void ft_putstr(char *str);

// int	main()
// {
// 	char *pointer_to_string = "Hello";
// 	ft_putstr(pointer_to_string);
// }
// /*ex06*/
// #include <stdio.h>

// int	ft_strlen(char *str);

// int	main()
// {
// 	char *m = "hello C world";
// 	printf("%d", ft_strlen(m));
// }

// /*ex07*/
// void ft_rev_int_tab(int *tab, int size);

// int    main()
// {
// 	int	size;
// 	int     tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
// 	size = 10;

// 	printf("ARRAY ORIGINAL:\n");
// 	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
//         ft_rev_int_tab(tab, size);
	
// 	int i =0;
// 	printf("\nARRAY LUEGO DEL CAMBIO:\n");
// 	while (i <= 9)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
//     return (0);
// }
// /*ex08*/

// void ft_sort_int_tab(int *tab, int size);

// int    main()
// {
// 	int	size;
// 	int     tab[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
// 	size = 10;

// 	printf("ARRAY ORIGINAL:\n");
// 	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
//         ft_sort_int_tab(tab, size);

// 	printf("\nARRAY LUEGO DEL CAMBIO:\n");
// 	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
//         return (0);
// }