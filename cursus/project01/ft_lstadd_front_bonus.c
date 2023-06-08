/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:20:36 by castorga          #+#    #+#             */
/*   Updated: 2023/06/06 18:20:39 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototipo 
void ft_lstadd_front(t_list **lst, t_list *new);

Parámetros 
lst: puntero al primer nodo de una lista.
new: puntero al nodo que añadir al principio de la lista.

Valor devuelto 
Nada

Funciones autorizadas
Ninguna

Descripción 
Añade el nodo ’new’ al principio de la lista ’lst’.
*/

#include "libft.h"

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		//se asigna el puntero *lst al campo next del nuevo nodo new
		new->next = *lst;

		// se asigna el puntero new al puntero *lst para que apunte al nuevo nodo
		*lst = new;
	}
}

//funcion que imprime la lista
static void	print_list(t_list *lst)
{
	int	*data;

	while (lst != NULL)// mientras no se llegue al final de la lista
	{
		data = (int *)lst->content; //se obtiene el contenido del nodo actual
		printf("%d ", *data);// Imprime el contenido del nodo actual
		lst = lst->next;// Avanza al siguiente nodo de la lista
	}
	printf("\n");
}

int	main(void)
{
	// ------------ PRIMER NODO ------------
	int *data1 = (int *)malloc(sizeof(int));  // Asigna memoria para el contenido del nodo
	*data1 = 42;  // Asigna el valor 42 al contenido del nodo
	t_list *node1 = (t_list *)malloc(sizeof(t_list));  // Asigna memoria para el nodo
	node1->content = data1;  // Asigna el contenido al nodo
	node1->next = NULL;  // Establece el siguiente puntero del nodo como nulo

	// ------------ SEGUNDO NODO ------------
	int *data2 = (int *)malloc(sizeof(int));  // Asigna memoria para el contenido del nodo
	*data2 = 75;  // Asigna el valor 75 al contenido del nodo
	t_list *node2 = (t_list *)malloc(sizeof(t_list));  // Asigna memoria para el nodo
	node2->content = data2;  // Asigna el contenido al nodo
	node2->next = NULL;  // Establece el siguiente puntero del nodo como nulo

	ft_lstadd_front(&node1, node2);  // Agrega el segundo nodo al frente de la lista
	printf("Contenido de la lista: ");
	print_list(node1);  // Imprime el contenido de la lista
	printf("Contenido del nodo1: %d\n", *(int *)(node1->content));  // Imprime el contenido del nodo1
	printf("Contenido del nodo2: %d\n", *(int *)(node1->next->content));  // Imprime el contenido del nodo2
	return (0);
}
