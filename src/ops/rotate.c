/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:23:37 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:09:23 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ra(t_stack *s)
{
	rotate(&s->a);
	ft_printf("ra\n");
}

void	rb(t_stack *s)
{
	rotate(&s->b);
	ft_printf("rb\n");
}

void	rr(t_stack *s)
{
	rotate(&s->a);
	rotate(&s->b);
	ft_printf("rr\n");
}
