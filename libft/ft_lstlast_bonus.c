/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:10:47 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:32:45 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Return the last node of the list.
 * @param lst List to search.
 * @return Last node or NULL if list is empty.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return (NULL);
	aux = lst;
	while (aux->next)
	{
		aux = aux->next;
	}
	return (aux);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Nodo 1");
	list->next = ft_lstnew("Nodo 2");
	list->next->next = ft_lstnew("Nodo 3");

	printf("Último nodo: %s\n", (char *)ft_lstlast(list)->content);
	free(list->next->next);
	free(list->next);
	free(list);
	return (0);
} */