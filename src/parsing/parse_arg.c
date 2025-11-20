/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:03:58 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 22:41:46 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	parse_args(char **argv)
{
	long	*tab;
	long	i;
	long	len;

	len = count_param(argv);
	tab = create_valtab(argv);
	i = 0;
	while (i < len)
	{
		ft_putunbr_fd(tab[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
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

