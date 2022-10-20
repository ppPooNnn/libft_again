/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:21:07 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/20 15:30:27 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	new = malloc(len + 1);
	if (!new)
		return (0);
	while (s[start] && i < len && start < ft_strlen(s))
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
