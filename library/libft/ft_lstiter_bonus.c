/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:50:09 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:40:18 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void upper(void *p)
// {
//     char *s = p;
//     while (*s)
//     {
//         if (*s >= 'a' && *s <= 'z')
//             *s = *s - 32;
//         s++;
//     }
// }
// int main(void)
// {
//     t_list *a = ft_lstnew(strdup("abc"));
//     ft_lstiter(a, upper);
//     printf("%s\n", (char *)a->content);
//     ft_lstclear(&a, free);
//     return (0);
// }
