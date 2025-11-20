/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:44:50 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:33:10 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char buf[6];
//     ft_memset(buf, 'x', 5);
//     buf[5] = 0;
//     printf("%s\n", buf);
//     return (0);
// }
