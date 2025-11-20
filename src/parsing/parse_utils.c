/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:16:12 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 22:21:18 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

long	count_param(char **argv)
{
	long	i;

	i = 0;
	while (argv[i])
		i++;
	return (i - 1);
}

int	is_valid_number(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	if ((s[0] == '+' || s[0] == '-')
		&& (s[1] == '+' || s[1] == '-'))
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicate(char **argv)
{
	int		i;
	int		j;
	long	a;
	long	b;

	i = 1;
	while (argv[i])
	{
		a = ft_atol(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			b = ft_atol(argv[j]);
			if (a == b)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
