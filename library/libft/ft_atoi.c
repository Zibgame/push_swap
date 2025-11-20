/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:01:20 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/20 10:56:43 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long long res, int digit, int sign)
{
	if (sign == 1 && res > (9223372036854775807ULL - digit) / 10)
		return (-1);
	if (sign == -1 && res > (9223372036854775808ULL - digit) / 10)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int									i;
	int									sign;
	int									digit;
	unsigned long long					res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (check_overflow(res, digit, sign) != 1)
			return (check_overflow(res, digit, sign));
		res = res * 10 + digit;
		i++;
	}
	return ((int)(res * sign));
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	char *s = "   -9223372036854775809	"; */
/* 	printf("%d\n", ft_atoi(s)); */
/* 	printf("%d\n", atoi(s)); */
/* 	return (0); */
/* } */
