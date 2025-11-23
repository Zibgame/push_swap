/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:08:46 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/21 16:51:13 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_stack(t_stack *s)
{
	if (is_sorted(s->a))
		return ;
	if (s->size_a == 2)
		sa(s);
	else if (s->size_a == 3)
		sort_three(s);
	else if (s->size_a <= 5)
		sort_five(s);
	else
		radix_sort(s);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	if (argc < 2)
		return (0);
	stack = parse_args(argv);
	print_stacks(stack);
	if (!stack)
		return (1);
	sort_stack(stack);
	print_stacks(stack);
	free_all(stack);
	return (0);
}
