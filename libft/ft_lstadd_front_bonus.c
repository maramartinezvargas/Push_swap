/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:15:06 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:32:07 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Add a node at the beginning of the list.
 * @param lst Double pointer to the list.
 * @param new Node to add.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int main(void)
{
	t_list *head = NULL; // Crear mi lista vacía con un nodo inicial NULL (head)
	t_list *new_node1 = ft_lstnew("Nodo 1"); // Crear un nuevo nodo
	t_list *new_node2 = ft_lstnew("Nodo 2"); // Crear otro nodo

	ft_lstadd_front(&head, new_node1); // Añadir el primer nodo al principio
	ft_lstadd_front(&head, new_node2); // Añadir el segundo nodo al principio

	t_list *current = head; // Recorrer la lista para imprimir cada nodo
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	while (head != NULL) // Liberar la memoria de los nodos uno por uno
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}

	return (0);
} */