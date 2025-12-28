/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:10:11 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 18:26:23 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **from, t_stack **to)
{
	t_stack	*node;

	if (!from || !*from)
		return ;
	node = *from;
	*from = node->next;
	if (*from)
		(*from)->prev = NULL;
	node->next = *to;
	if (*to)
		(*to)->prev = node;
	node->prev = NULL;
	*to = node;
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
