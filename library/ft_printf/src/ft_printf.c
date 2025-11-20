/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:34:59 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/22 13:11:35 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	int		size;
	va_list	args_list;

	if (!s)
		return (0);
	size = 0;
	va_start(args_list, s);
	if (!s)
		return (0);
	size = parser(s, args_list);
	va_end(args_list);
	return (size);
}
