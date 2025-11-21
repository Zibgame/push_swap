/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:18:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 15:10:08 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/**
 * @brief swap les deux premier element de la pile
 *
 * @param stack
 */
static void swap_first_two(t_node **stack)
{
    t_node *first;
    t_node *second;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void    sa(t_stack *s)
{
    if (!s)
        return ;
    swap_first_two(&s->a);
    ft_printf("sa\n");
}

void    sb(t_stack *s)
{
    if (!s)
        return ;
    swap_first_two(&s->b);
    ft_printf("sb\n");
}

void    ss(t_stack *s)
{
    if (!s)
        return ;
    swap_first_two(&s->a);
    swap_first_two(&s->b);
    ft_printf("ss\n");
}
