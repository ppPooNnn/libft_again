/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:44:38 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/23 22:49:44 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*new;
	long	num;
	int		len;

	num = n;
	len = ft_checksize(n);
	new = malloc(len + 1);
	if (!new)
		return (0);
	new[len] = '\0';
	len--;
	if (num < 0)
	{
		new[0] = '-';
		num *= -1;
	}
	if (num == 0)
		new[0] = '0';
	while (num)
	{
		new[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (new);
}
