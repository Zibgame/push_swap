/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:21:00 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:21:07 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_bits(t_stack *s)
{
	int max = 0;
	t_node *tmp = s->a;

	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}

	int bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return bits;
}

void	radix_sort(t_stack *s)
{
	int bits = max_bits(s);

	for (int i = 0; i < bits; i++)
	{
		int count = s->size_a;
		while (count--)
		{
			if (((s->a->index >> i) & 1) == 0)
				pb(s);
			else
				ra(s);
		}
		while (s->size_b > 0)
			pa(s);
	}
}
