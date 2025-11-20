/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:27:12 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/20 23:37:00 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *s)
{
	long	result;
	long	sign;
	long	digit;

	result = 0;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (result > (LONG_MAX - digit) / 10)
			return (sign == 1 ? LONG_MAX : LONG_MIN);
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
