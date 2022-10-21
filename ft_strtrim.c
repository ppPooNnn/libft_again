/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:15:48 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/21 18:20:18 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		head;
	int		tail;
	int		len;
	int		i;

	i = 0;
	head = 0;
	if (!s1 || !set)
		return (0);
	tail = ft_strlen(s1);
	while (ft_check(set, s1[head]))
		head++;
	while (ft_check(set, s1[tail - 1]) && tail > head)
		tail--;
	len = tail - head;
	new = malloc(len + 1);
	if (!new)
		return (0);
	while (i < len)
		new[i++] = s1[head++];
	new[i] = '\0';
	return (new);
}
