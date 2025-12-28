/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 00:41:51 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:34:29 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Apply a function to each node in the list.
 * @param lst List to iterate over.
 * @param f Function applied to each node's content.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}
 int	main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("hola"));
	l1->next = ft_lstnew(ft_strdup("mundo"));
	l1->next->next = ft_lstnew(ft_strdup("insensato"));

	printf("Antes de ft_lstiter:\n");
	ft_lstiter(l1, print_content);

	t_list	*tmp;
	while (l1)
	{
		tmp = l1->next;
		free(l1->content);
		free(l1);
		l1 = tmp;
	}
	if (l1 == NULL)
		printf("Lista liberada correctamente (list == NULL)\n");
	else
		printf("Error: list no está a NULL\n");
	return (0);
} */