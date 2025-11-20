/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:46:55 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:37:46 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// int main(void)
// {
//     t_list *a = ft_lstnew("hello");
//     t_list *b = ft_lstnew("world");
//     ft_lstadd_back(&a, b);
//     printf("%s\n", (char *)a->next->content);
//     return (0);
// }
