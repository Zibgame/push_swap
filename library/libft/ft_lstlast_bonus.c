/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:34:01 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:39:37 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
//     t_list *a = ft_lstnew("first");
//     ft_lstadd_back(&a, ft_lstnew("last"));
//     t_list *last = ft_lstlast(a);
//     printf("%s\n", (char *)last->content);
//     return (0);
// }
