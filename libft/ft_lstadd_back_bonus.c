/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:41:43 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:33:09 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Add a node at the end of the list.
 * @param lst Pointer to the list.
 * @param new Node to add.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = *lst;
	while (aux->next)
	{
		aux = aux->next;
	}
	if (new)
		aux->next = new;
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*current;

	list = ft_lstnew("Nodo 1");
	list->next = ft_lstnew("Nodo 2");
	list->next->next = ft_lstnew("Nodo 3");
	ft_lstadd_back(&list, ft_lstnew("Nodo 4"));
	current = list;
	while (current != NULL)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	return (0);
} */