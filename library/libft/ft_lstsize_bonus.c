/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:02:52 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:39:26 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main(void)
// {
//     t_list *a = ft_lstnew("one");
//     ft_lstadd_back(&a, ft_lstnew("two"));
//     ft_lstadd_back(&a, ft_lstnew("three"));
//     printf("%d\n", ft_lstsize(a));
//     return (0);
// }
