/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:10:46 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:10:53 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_one(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack *s)
{
	if (!s)
		return ;
	reverse_rotate_one(&s->a);
	ft_printf("rra\n");
}

void	rrb(t_stack *s)
{
	if (!s)
		return ;
	reverse_rotate_one(&s->b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *s)
{
	if (!s)
		return ;
	reverse_rotate_one(&s->a);
	reverse_rotate_one(&s->b);
	ft_printf("rrr\n");
}
