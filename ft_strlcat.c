/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:28:57 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/06 15:33:33 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	while (*src && i < size - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (i + ft_strlen(src));
}
