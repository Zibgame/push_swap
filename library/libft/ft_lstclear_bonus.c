/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:21:06 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:39:57 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

// void del(void *p) { free(p); }
// int main(void)
// {
//     t_list *a = ft_lstnew(strdup("one"));
//     ft_lstadd_back(&a, ft_lstnew(strdup("two")));
//     ft_lstclear(&a, del);
//     return (0);
// }
