/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:26 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/24 13:14:31 by zcadinot         ###   ########.fr       */
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

/**
 * @struct s_node
 * @brief Represente un element d’une pile chainer.
 *
 */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/**
 * @struct s_stacknode
 * @brief Gere l'etat global des piles utiliser par push_swap.
 *
 */
typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
}	t_stack;

/**< === Parsing & Validation === >**/

t_stack	*parse_args(char **argv);
long	count_param(char **argv);
long	*create_valtab(char **argv);

int		is_valid_number(char *s);
int		check_arg(char **argv);
int		has_duplicate(long *tab, long len);

long	ft_atol(char *str);
int		error(void);

/**< === Stack Utils === >**/

t_node	*new_node(int value);
void	node_add_back(t_node **stack, t_node *new);
void	node_add_front(t_node **stack, t_node *new);

t_node	*pop_back(t_node **stack);
t_node	*pop_front(t_node **stack);

int		stack_size(t_node *stack);

t_node	*init_stack_a(long *tab, long len);
t_node	*init_stack_b(void);
t_stack	init_stack(long *tab, long len);
void	print_stacks(t_stack *s);

/**< === Sort Utils === >**/

int		is_sorted(t_node *stack);
void	assign_index(t_node *a);

/**< === Sort Utils === >**/

void	free_stack(t_stack *s);
void	free_all(t_stack *s);
void	free_split(char **split);
int		check_split(char **split);

/**< === Operations === >**/

/* === Operations : swap === */

void	sa(t_stack *s);
void	sb(t_stack *s);
void	ss(t_stack *s);

/* === Operations : push === */

void	pa(t_stack *s);
void	pb(t_stack *s);

/* === Operations : rotate === */

void	ra(t_stack *s);
void	rb(t_stack *s);
void	rr(t_stack *s);

/* === Operations : reverse rotate === */

void	rra(t_stack *s);
void	rrb(t_stack *s);
void	rrr(t_stack *s);

/* ============================
**       ALGORITHMS
** ============================ */

void	sort_three(t_stack *s);
void	sort_five(t_stack *s);
void	radix_sort(t_stack *s);
void	ft_chunk_b(t_stack *stackt);
void	ft_sort_b_to_a(t_stack *stackt);

#endif
