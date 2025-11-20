/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:03:58 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 23:50:00 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	parse_args(char **argv)
{
	long	*tab;
	long	i;
	long	len;

	if (!check_arg(argv))
		return ;
	len = count_param(argv);
	tab = create_valtab(argv);
	if (!tab)
		return ;
	i = 0;
	while (i < len)
	{
		ft_putnbr_fd(tab[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	free(tab);
}

/**
 * @brief cree un tableau de long via argv
 *
 * @return 
 */

long	*create_valtab(char **argv)
{
	long	i;
	long	j;
	long	len;
	long	*tab;

	len = count_param(argv);
	tab = calloc(len, sizeof(long));
	if (!tab)
		return (NULL);
	i = 1;
	j = 0;
	while (argv[i])
	{
		tab[j] = ft_atol(argv[i]);
		i++;
		j++;
	}
	return (tab);
}

int	check_arg(char **argv)
{
	int		i;
	long	v;

	i = 1;
	while (argv[i])
	{
		if (!is_valid_number(argv[i]))
		{
			ft_printf("Error\n : Invalid number '%s'\n", argv[i]);
			return (0);
		}
		v = ft_atol(argv[i]);
		if (v < INT_MIN || v > INT_MAX)
		{
			ft_printf("Error\n : Number out TO BIG found '%s'\n", argv[i]);
			return (0);
		}
		i++;
	}
	if (has_duplicate(argv))
	{
		ft_printf("Error\n : Duplicate numbers found\n");
		return (0);
	}
	return (1);
}

/* int check_custom(char **argv, int (*test)(char *)) */
/* { */
/*     int i = 1; */

/*     while (argv[i]) */
/*     { */
/*         if (!test(argv[i])) */
/*             return (0); */
/*         i++; */
/*     } */
/*     return (1); */
/* } */
