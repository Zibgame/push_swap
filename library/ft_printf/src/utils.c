/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:42:23 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/22 12:48:29 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	ft_puthex_recursive(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_recursive(n / 16, base);
	len += write(1, &base[n % 16], 1);
	return (len);
}

int	ft_putarg_hex(char type, va_list args)
{
	unsigned int	n;
	int				len;

	n = va_arg(args, unsigned int);
	if (type == 'x')
		len = ft_puthex_recursive(n, "0123456789abcdef");
	else
		len = ft_puthex_recursive(n, "0123456789ABCDEF");
	return (len);
}

int	ft_putptr_recursive(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_putptr_recursive(n / 16);
	len += write(1, &"0123456789abcdef"[n % 16], 1);
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	addr = (unsigned long)ptr;
	len += ft_putptr_recursive(addr);
	return (len);
}
