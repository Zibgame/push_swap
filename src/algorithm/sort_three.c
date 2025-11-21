/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:19:32 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:19:37 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *s)
{
	int a = s->a->value;
	int b = s->a->next->value;
	int c = s->a->next->next->value;

	if (a < b && b < c)
		return ;
	if (a > b && a < c)
		sa(s);
	else if (a > b && b > c)
	{
		sa(s);
		rra(s);
	}
	else if (a > c && b < c)
		ra(s);
	else if (a < c && b > c)
	{
		sa(s);
		ra(s);
	}
	else if (a < b && a > c)
		rra(s);
}
