/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:55:39 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 14:22:49 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

/**
 * @brief	Cree une nouveau node = value
 *
 * @param value
 *
 * @return le noeud
 */
t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node) * 1);
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

/**
 * @brief Ajoute *new a la fin de **node
 *
 * @param **node la Pile
 *
 * @param *new le nouveau node a ajouter a la fin de la pile
 *
 * @return la nouvelle pile
 * */
void	node_add_back(t_node **stack, t_node *new)
{
	t_node	*tmp;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/**
 * @brief Ajoute un noeud *new a la pile **stack
 *
 * @param stack
 * @param new
 */
void	node_add_front(t_node **stack, t_node *new)
{
	if (!new)
		return ;
	new->next = *stack;
	*stack = new;
}
