/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:03:58 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 13:13:36 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

static void	check_duplicates_and_exit(long *tab, long len)
{
	if (has_duplicate(tab, len))
	{
		free(tab);
		exit(error());
	}
}

static t_stack	*alloc_stack_or_exit(long *tab, long len)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
	{
		free(tab);
		exit(error());
	}
	*stack = init_stack(tab, len);
	assign_index(stack->a);
	return (stack);
}

static void	exit_if_sorted(t_stack *stack, long *tab)
{
	if (is_sorted(stack->a))
	{
		free_all(stack);
		free(tab);
		exit(0);
	}
}

t_stack	*parse_args(char **argv)
{
	long	*tab;
	long	len;
	t_stack	*stack;

	if (!check_arg(argv))
		exit(error());
	len = count_param(argv);
	tab = create_valtab(argv);
	if (!tab)
		exit(error());
	check_duplicates_and_exit(tab, len);
	stack = alloc_stack_or_exit(tab, len);
	exit_if_sorted(stack, tab);
	free(tab);
	return (stack);
}

long	*create_valtab(char **argv)
{
	char	**split;
	long	*tab;
	long	j;
	int		i;
	int		k;

	tab = malloc(sizeof(long) * count_param(argv));
	if (!tab)
		return (NULL);
	j = 0;
	i = 1;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (free(tab), NULL);
		k = 0;
		while (split[k])
			tab[j++] = ft_atol(split[k++]);
		free_split(split);
		i++;
	}
	return (tab);
}
