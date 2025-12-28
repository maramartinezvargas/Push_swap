/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:25:28 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:32:22 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Return the size of the list.
 * @param lst List to measure.
 * @return Number of nodes in the list.
 */

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	if (!lst)
		return (0);
	count = 1;
	aux = lst;
	while (aux->next)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}

/* #include <stdio.h>

int main(void)
{
	t_list *head = NULL; // Crear una lista vacía
	t_list *node1 = ft_lstnew("Nodo 1");
	t_list *node2 = ft_lstnew("Nodo 2");
	t_list *node3 = ft_lstnew("Nodo 3");

	// Añadir nodos a la lista
	ft_lstadd_front(&head, node3); // Lista: Nodo 3
	ft_lstadd_front(&head, node2); // Lista: Nodo 2 -> Nodo 3
	ft_lstadd_front(&head, node1); // Lista: Nodo 1 -> Nodo 2 -> Nodo 3

	int size = ft_lstsize(head);
	printf("Tamaño de la lista: %d\n", size); // Debería imprimir 3

	// Liberar memoria
	while (head != NULL)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}

	return (0);
} */