/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:01:13 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/05 15:51:32 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*(char *)&dest[i] = *(char *)&src[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			*(char *)&dest[n - 1] = *(char *)&src[n - 1];
			n--;
		}
	}
	return (dest);
}
