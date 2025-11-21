/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:10:33 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 15:17:15 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/**
 * @brief Vas push le node From dans la pile to
 * @param from
 * @param to
 */
static void push_node(t_node **from, t_node **to)
{
    t_node  *tmp;

    if (!from || !*from)
        return ;
    tmp = *from;
    *from = (*from)->next;
    tmp->next = *to;
    *to = tmp;
}

void    pa(t_stack *s)
{
    if (!s)
        return ;
    push_node(&s->b, &s->a);
    ft_printf("pa\n");
}

void    pb(t_stack *s)
{
    if (!s)
        return ;
    push_node(&s->a, &s->b);
    ft_printf("pb\n");
}
