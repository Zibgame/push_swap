/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:33:39 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 13:12:36 by zcadinot         ###   ########.fr       */
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

int	error(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	check_split(char **split)
{
	int		i;
	long	n;

	i = 0;
	while (split[i])
	{
		if (!is_valid_number(split[i]))
			return (0);
		n = ft_atol(split[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

int	check_arg(char **argv)
{
	int		i;
	char	**split;

	i = 1;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		if (split[0] == NULL)
			return (free_split(split), 0);
		if (!check_split(split))
		{
			free_split(split);
			return (0);
		}
		free_split(split);
		i++;
	}
	return (1);
}
