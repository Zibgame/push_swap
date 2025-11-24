/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:16:12 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 13:12:06 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	count_param(char **argv)
{
	char	**split;
	long	count;
	int		i;
	int		k;

	i = 1;
	count = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		k = 0;
		while (split[k])
		{
			count++;
			k++;
		}
		free_split(split);
		i++;
	}
	return (count);
}

int	is_valid_number(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '+' || s[0] == '-')
		i++;
	if (i == 1 && s[1] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicate(long *tab, long len)
{
	long	i;
	long	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
