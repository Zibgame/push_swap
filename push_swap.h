/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 23:49:33 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# include "library/libft/libft.h"
# include "library/get_next_line/get_next_line.h"
# include "library/ft_printf/ft_printf.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stacknode
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
}	t_stackt;

void	parse_args(char **argv);
long	count_param(char **argv);
long	*create_valtab(char **argv);
long	count_param(char **argv);
int		is_valid_number(char *s);
/* int		check_custom(char **argv, int (*test)(char *)); */
int		check_arg(char **argv);
int		has_duplicate(char **argv);

t_node	*pop_back(t_node **stack);
t_node	*pop_front(t_node **stack);
t_node	*new_node(int value);
void	node_add_back(t_node **stack, t_node *new);
void	node_add_front(t_node **lst, t_node *new);
int		stack_size(t_node *stack);

long	ft_atol(char *str);

#endif
