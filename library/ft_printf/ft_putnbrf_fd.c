/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:02:44 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/19 20:01:20 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrf_fd(int n, int fd)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		ft_putcharf_fd('-', fd);
		nb = -nb;
		len++;
	}
	if (nb >= 10)
		len += ft_putnbrf_fd(nb / 10, fd);
	ft_putcharf_fd((nb % 10) + '0', fd);
	len++;
	return (len);
}

// int main(void)
// {
//     ft_putnbrf_fd(42, 1);
//     return (0);
// }
