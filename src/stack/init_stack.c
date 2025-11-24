/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:26:14 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 14:30:15 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

t_stack	init_stack(long *tab, long len)
{
	t_stack	stack;

	stack.a = init_stack_a(tab, len);
	stack.b = init_stack_b();
	stack.size_a = len;
	stack.size_b = 0;
	return (stack);
}

t_node	*init_stack_a(long *tab, long len)
{
	long	i;
	t_node	*stack_a;
	t_node	*node;

	stack_a = NULL;
	i = 0;
	while (i < len)
	{
		node = new_node(tab[i]);
		if (!node)
			return (NULL);
		node_add_back(&stack_a, node);
		i++;
	}
	return (stack_a);
}

t_node	*init_stack_b(void)
{
	return (NULL);
}
