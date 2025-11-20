/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:03:23 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:39:48 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del(void *p) { free(p); }
// int main(void)
// {
//     char *s = strdup("delete");
//     t_list *a = ft_lstnew(s);
//     ft_lstdelone(a, del);
//     return (0);
// }
