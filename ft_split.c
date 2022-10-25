/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:32:56 by puttasa           #+#    #+#             */
/*   Updated: 2022/10/25 18:18:55 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substring(char const *s, char c)
{
	int	count;

	count = 0;
	while(*s)
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

static int	substringlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c)
	{
		s++;
		len++;
	}
	return (len);
}

/*
char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	char	**new;
	char	buffer[16384];

	i = 0;
	if (s)
		return (0);
	count = count_substring(s, c);
	new = malloc(sizeof(char *) * count + 1);
	if (!new)
		return (0);
}
*/
int	main()
{
	char	*s = "i,try,to,do,split,again";
	char	c = ',';
	int	count;
	char	*new = join_substring(s, c);

	count = count_substring(s, c);
}
