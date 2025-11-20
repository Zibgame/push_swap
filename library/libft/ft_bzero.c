/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:11:40 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:32:44 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char buf[10] = "abcdef";
//     ft_bzero(buf + 2, 3);
//     for (int i = 0; i < 6; i++)
//         printf("%c", buf[i] ? buf[i] : '.');
//     printf("\n");
//     return (0);
// }
