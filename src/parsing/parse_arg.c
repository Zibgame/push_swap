/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:03:58 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 22:04:29 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	parse_args(char **argv)
{
	char	**args;
	int		i;

	args = ft_split(argv[1], ' ');
	i = 0;
	while (args[i])
	{
		ft_printf("%s\n", args[i]);
		i++;
	}
}
