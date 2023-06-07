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
	//se asigna el puntero *lst al campo next del nuevo elemento new
	new->next = *lst;
	*lst = new;
}
