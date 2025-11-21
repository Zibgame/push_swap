/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:33:39 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:34:49 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* static int	count_nodes(t_node *a) */
/* { */
/* 	int	count; */

/* 	count = 0; */
/* 	while (a) */
/* 	{ */
/* 		count++; */
/* 		a = a->next; */
/* 	} */
/* 	return (count); */
/* } */

void	assign_index(t_node *a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	int		idx;

	tmp1 = a;
	while (tmp1)
	{
		idx = 0;
		tmp2 = a;
		while (tmp2)
		{
			if (tmp2->value < tmp1->value)
				idx++;
			tmp2 = tmp2->next;
		}
		tmp1->index = idx;
		tmp1 = tmp1->next;
	}
}
