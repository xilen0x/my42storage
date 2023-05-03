#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int    main()
{
	int	size;
	int     tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	size = 10;

	printf("ARRAY ORIGINAL:\n");
	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
        ft_rev_int_tab(tab, size);

	printf("\nARRAY LUEGO DEL CAMBIO:\n");
	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
        return (0);
}

