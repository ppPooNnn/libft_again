/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:40:26 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/20 15:31:01 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return (0);
	while (*src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst);
}
