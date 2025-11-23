/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:20:14 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 00:40:25 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int find_min_pos(t_node *a)
{
    int pos = 0;
    int min = a->index;
    int i = 0;
    t_node *tmp = a;

    while (tmp)
    {
        if (tmp->index < min)
        {
            min = tmp->index;
            pos = i;
        }
        tmp = tmp->next;
        i++;
    }
    return pos;
}

void sort_five(t_stack *s)
{
    int pos;

    while (s->size_a > 3)
    {
        pos = find_min_pos(s->a);

        if (pos <= s->size_a / 2)
            while (pos-- > 0)
                ra(s);
        else
            while (pos++ < s->size_a)
                rra(s);

        pb(s);
    }
    sort_three(s);
    while (s->size_b > 0)
        pa(s);
}
