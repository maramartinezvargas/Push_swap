/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:42:18 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:34:21 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Clear and free all nodes in the list.
 * @param lst Pointer to the list.
 * @param del Function to free node content.
 */

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*list;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		list = (*lst)->next;
		del ((*lst)->content);
		free(*lst);
		*lst = list;
	}
	*lst = NULL;
}
/* #include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("hola"));
	l1->next = ft_lstnew(ft_strdup("mundo"));
	l1->next->next = ft_lstnew(ft_strdup("insensato"));
	t_list	*tmp;

	printf("Antes de ft_lstclear:\n");
	tmp = l1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&l1, del);
	if (l1 == NULL)
		printf("Lista borrada correctamente (list == NULL)\n");
	else
		printf("Error: list no está a NULL\n");
	return (0);
} */