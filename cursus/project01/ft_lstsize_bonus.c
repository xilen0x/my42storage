/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:50:45 by castorga          #+#    #+#             */
/*   Updated: 2023/06/08 13:50:47 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototipo
int ft_lstsize(t_list *lst);

Parámetros 
lst: el principio de la lista.

Valor devuelto 
La longitud de la lista.

Funciones autorizadas
Ninguna

Descripción 
Cuenta el número de nodos de una lista.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
int	main(void)
{
	int *data1 = (int *)malloc(sizeof(int));
	int *data2 = (int *)malloc(sizeof(int));
	int *data3 = (int *)malloc(sizeof(int));
	int *data4 = (int *)malloc(sizeof(int));
	*data1 = 10;
	*data2 = 11;
	*data3 = 12;
	*data4 = 13;
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	t_list *node4 = (t_list *)malloc(sizeof(t_list));
	node1->content = data1;
	node2->content = data2;
	node3->content = data3;
	node4->content = data4;
	node1->next = NULL;
	node2->next = NULL;
	node3->next = NULL;
	node4->next = NULL;
	ft_lstadd_front(&node1, node2);
	printf("%d\n", ft_lstsize(node1));
	return (0);
}
*/