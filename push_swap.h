/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamamart <tamamart@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:09:05 by tamamart          #+#    #+#             */
/*   Updated: 2025/12/28 17:51:24 by tamamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ============================= INCLUDES ============================= */
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* ============================== STRUCTS ============================== */
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/* ============================ PARSING ============================ */
int		parse_args(int argc, char **argv, t_stack **a);
int		is_number(char *str);
long	ft_atol(const char *str);
int		has_duplicates(t_stack *a);

/* ============================= ERRORS ============================= */
void	error_exit(void);
void	free_stack(t_stack **stack);

/* ========================== STACK UTILS =========================== */
int		stack_size(t_stack *stack);
int		is_sorted(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_min(t_stack *stack);
t_stack	*stack_max(t_stack *stack);

/* =========================== OPERATIONS =========================== */
/* swap */
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

/* push */
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

/* rotate */
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

/* reverse rotate */
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

/* ============================ SORTING ============================ */
void	sort_small(t_stack **a, t_stack **b);
void	sort_big(t_stack **a, t_stack **b);

/* ============================ INDEXING ============================ */
void	assign_index(t_stack *a);

#endif