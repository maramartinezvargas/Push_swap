/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:10:37 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 20:36:33 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack **a)
{
	t_stack	*max;

	if (is_sorted(*a))
		return ;
	max = stack_max(*a);
	if ((*a)->value == max->value)
		ra(a);
	else if ((*a)->next->value == max->value)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

static void	push_min_to_b(t_stack **a, t_stack **b)
{
	t_stack	*min;

	min = stack_min(*a);
	while ((*a)->value != min->value)
	{
		if (min->value < (*a)->value)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
}

void	sort_small(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
	}
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
	{
		push_min_to_b(a, b);
		sort_three(a);
		pa(a, b);
	}
	else if (size == 5)
	{
		push_min_to_b(a, b);
		push_min_to_b(a, b);
		sort_three(a);
		pa(a, b);
		pa(a, b);
	}
}
