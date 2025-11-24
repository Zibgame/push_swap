/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:19:18 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 11:28:58 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max_index(t_node *b)
{
	int	index_max;

	index_max = b->index;
	while (b)
	{
		if (b->index > index_max)
		{
			index_max = b->index;
		}
		b = b->next;
	}
	return (index_max);
}

static int	ft_index_pos(t_node *b, int index)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->index == index)
		{
			return (pos);
		}
		b = b->next;
		pos++;
	}
	return (-1);
}

void	ft_chunk_b(t_stack *stack)
{
	int	chunk;
	int	i;

	i = 0;
	if (stack->size_a <= 100)
		chunk = 20;
	else
		chunk = 30;
	while (stack->a)
	{
		if (stack->a->index <= i)
		{
			pb(stack);
			rb(stack);
			i++;
		}
		else if (stack->a->index <= i + chunk)
		{
			pb(stack);
			i++;
		}
		else
			ra(stack);
	}
}

void	ft_sort_b_to_a(t_stack *stack)
{
	int		index;
	int		pos;

	pos = 0;
	index = 0;
	while (stack->size_b > 0)
	{
		index = ft_max_index(stack->b);
		pos = ft_index_pos(stack->b, index);
		if (pos <= stack->size_b / 2)
		{
			while (stack->b->index != index)
				rb(stack);
		}
		else
		{
			while (stack->b->index != index)
				rrb(stack);
		}
		pa(stack);
	}
}
