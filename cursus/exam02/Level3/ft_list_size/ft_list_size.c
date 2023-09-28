/*Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

#include "ft_list.h"
# include <stdlib.h>
# include <stdio.h>
//# include <string.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (ft_list_size(begin_list->next) + 1);
}

int	main(void)
{
    // Crear una lista simple
    t_list node1, node2, node3;

    node1.data = "Hola";
    node2.data = "Mundo";
    node3.data = "!";

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    // Calcular el tamaño de la lista usando ft_list_size
    int size = ft_list_size(&node1);

    // Imprimir el resultado
    printf("El tamaño de la lista es: %d\n", size);

    return (0);
}
