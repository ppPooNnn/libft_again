/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:24:34 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/21 18:32:07 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	check;
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	check = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		check = 1;
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (check == 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * sign);
}
