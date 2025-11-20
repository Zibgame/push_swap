/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:14:18 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:32:52 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*place;
	size_t			total;
	size_t			i;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	place = malloc(total);
	if (!place)
		return (NULL);
	i = 0;
	while (i < total)
	{
		((unsigned char *)place)[i] = 0;
		i++;
	}
	return (place);
}

// ft_calloc.c
// int main(void)
// {
//     char *p = ft_calloc(5, sizeof(char));
//     if (!p)
//         return (1);
//     p[0] = 'A';
//     printf("%c\n", p[0]);
//     free(p);
//     return (0);
// }
