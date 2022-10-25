/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:53:18 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/25 15:26:51 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const c, char const *set)
{
	int	count;

	count = 0;
	while (*set)
	{
		if (*set == c)
			return(1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	head;
	int	tail;
	int	len;
	int	i;
	char	*new;

	if (!s1 || !set)
		return (0);
	i = 0;
	head = 0;
	tail = ft_strlen(s1);
	while (s1[head] && ft_check(s1[head], set))
		head++;
	while (s1[tail - 1] && ft_check(s1[tail - 1], set) && tail > head)
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
