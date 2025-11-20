/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:25:07 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:33:23 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "abcde";
//     char dst[6];
//     ft_memcpy(dst, src, 6);
//     printf("%s\n", dst);
//     return (0);
// }
