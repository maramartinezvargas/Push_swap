/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 01:01:43 by tamamart          #+#    #+#             */
/*   Updated: 2025/10/09 15:34:48 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Create a new list by applying a function to each node.
 * @param lst Original list.
 * @param f Function to transform content.
 * @param del Function to free content if allocation fails.
 * @return New list or NULL if allocation fails.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* t_list	*new_list;
t_list	*new_node;
void	*new_content;

if (!lst || !f || !del)
	return (NULL);
new_list = NULL;
while (lst)
{
	new_content = f(lst->content);
	if (!new_content)
		return (ft_lstclear(&new_list, del), NULL);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (ft_lstclear(&new_list, del), NULL);
	}
	ft_lstadd_back(&new_list, new_node);
	lst = lst->next;
}
return (new_list); */

/* #include <stdio.h>
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	*to_upper(void *content)
{
	char	*str;
	char	*new_str;
	size_t	i;

	str = (char *)content;
	new_str = ft_strdup(str); 
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] = new_str[i] - 32;
		i++;
	}
	return (new_str);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	lst = ft_lstnew(ft_strdup("Hola"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("mundo")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("insensato")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("que")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tal")));
	printf("Lista antes de ft_lstmap:\n");
	print_list(lst);
	new_lst = ft_lstmap(lst, to_upper, del);
	printf("\nLista mapeada (con función to_upper):\n");
	print_list(new_lst);
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
} */