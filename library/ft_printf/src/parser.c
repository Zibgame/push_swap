/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:29:34 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/19 19:59:13 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putarg_int(char type, va_list args)
{
	int	len;

	len = 0;
	if (type == 'd' || type == 'i')
		len = ft_putnbrf_fd(va_arg(args, int), 1);
	else if (type == 'u')
		return (ft_putunbr_fd((unsigned int)va_arg(args, int), 1));
	return (len);
}

int	ft_putarg_char(char type, va_list args)
{
	int		len;
	char	*s;

	len = 0;
	if (type == 'c')
		len = write(1, &(char){(char)va_arg(args, int)}, 1);
	else if (type == 's')
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(null)";
		len = write(1, s, ft_strlenf(s));
	}
	else if (type == '%')
		len = write(1, "%", 1);
	return (len);
}

int	ft_putarg(char type, va_list args)
{
	if (type == 'd' || type == 'i')
		return (ft_putarg_int(type, args));
	else if (type == 'u')
		return (ft_putunbr_fd((unsigned int)va_arg(args, unsigned int), 1));
	else if (type == 'c' || type == 's' || type == '%')
		return (ft_putarg_char(type, args));
	else if (type == 'x' || type == 'X')
		return (ft_putarg_hex(type, args));
	else if (type == 'p')
		return (ft_putptr(va_arg(args, void *)));
	return (0);
}

int	parser(const char *str, va_list args)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '%')
		{
			size += write(1, "%", 1);
			i += 2;
		}
		else if (str[i] == '%' && str[i + 1])
		{
			i++;
			size += ft_putarg(str[i++], args);
		}
		else
		{
			size += write(1, &str[i], 1);
			i++;
		}
	}
	return (size);
}
