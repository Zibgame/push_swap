/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:41:14 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:53:30 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !del || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

// void del(void *p) { free(p); }
// void *dup_upper(void *p)
// {
//     char *s = strdup(p);
//     for (int i = 0; s[i]; i++)
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//     return (s);
// }
// int main(void)
// {
//     t_list *a = ft_lstnew(strdup("abc"));
//     t_list *b = ft_lstmap(a, dup_upper, del);
//     printf("%s\n", (char *)b->content);
//     ft_lstclear(&a, del);
//     ft_lstclear(&b, del);
//     return (0);
// }
