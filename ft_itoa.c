/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:07 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/22 20:27:38 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	num;
	char	*new;

	num = n;
	size = ft_numsize(num);
	new = malloc(size + 1);
	if (!new)
		return (0);
	if (num < 0)
	{
		new[0] = '-';
		num *= -1;
	}
	if (num == 0)
		new[0] = '0';
	new[size] = '\0';
	size--;
	while (num)
	{
		new[size] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (new);
}
