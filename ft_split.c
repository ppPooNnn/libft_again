/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:49:24 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/27 11:59:58 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substrcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	ft_substrlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	*ft_substrcpy(char const *s, char c)
{
	int	len;
	int	i;
	char	*new;

	i = 0;
	len = ft_substrlen(s, c);
	new = malloc(len + 1);
	if (!new)
		return (0);
	while (i < len && *s)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int	count;
	int	i;
	char	**new;

	i = 0;
	if (!s)
		return (0);
	count = ft_substrcount(s, c);
	new = malloc(sizeof(char *) * count + 1);
	if (!new)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			new[i++] = ft_substrcpy(s, c);
		while (*s != c && *s)
			s++;
	}
	new[i] = '\0';
	return (new);
}
