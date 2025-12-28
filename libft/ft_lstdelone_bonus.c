/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 23:20:46 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:33:51 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Delete a single node from the list.
 * @param lst Node to delete.
 * @param del Function to free the node's content.
 * @return None.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node;
	
	node = ft_lstnew(malloc(20)); 
	if (!node)
		return (1);
	ft_lstdelone(node, del);
	return (0);
} */