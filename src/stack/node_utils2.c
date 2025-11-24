/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:40:51 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 14:20:56 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

/**
 * @brief Suprime est return le premier noeud de la list 
 *
 * @param stack
 *
 * @return t_node
 */
t_node	*pop_front(t_node **stack)
{
	t_node	*first;

	if (!stack || !*stack)
		return (NULL);
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	return (first);
}

/**
 * @brief  enleve le dernier noeud de la pile
 *
 * @param stack
 *
 */
t_node	*pop_back(t_node **stack)
{
	t_node	*tmp;
	t_node	*prev;

	if (!stack || !*stack)
		return (NULL);
	if (!(*stack)->next)
	{
		tmp = *stack;
		*stack = NULL;
		return (tmp);
	}
	tmp = *stack;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	return (tmp);
}

/**
 * @brief donne la size de la stack
 *
 * @param stack
 *
 */
long	size_stack(t_node *stack)
{
	long	i;
	t_node	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	print_stacks(t_stack *s)
{
	t_node	*a;
	t_node	*b;

	a = s->a;
	b = s->b;
	ft_printf("Stack A:\n");
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
	ft_printf("Stack B:\n");
	while (b)
	{
		ft_printf("%d\n", b->value);
		b = b->next;
	}
	ft_printf("Size A: %d\n", s->size_a);
	ft_printf("Size B: %d\n", s->size_b);
}
