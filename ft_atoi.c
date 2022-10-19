/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:31:59 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/19 15:07:40 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*(str - 1) == '-' || *(str - 1) == '+')
			return (0);
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * sign);
}
