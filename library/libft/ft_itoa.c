/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:46:59 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:35:43 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long n)
{
	int	len;

	if (n <= 0)
		n *= -1;
	len = (n == 0);
	while (n > 0 && ++len)
		n /= 10;
	return (len);
}

char	*ft_itoa(int nb)
{
	long	n;
	int		i;
	char	*res;

	n = nb;
	i = numlen(n);
	res = malloc((i + (nb < 0) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		i++;
	}
	res[i] = '\0';
	if (n == 0)
		res[--i] = '0';
	while (n > 0)
	{
		res[--i] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

// int main(void)
// {
//     char *s = ft_itoa(-12345);
//     printf("%s\n", s);
//     free(s);
//     return (0);
// }
