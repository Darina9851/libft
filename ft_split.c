/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:36:09 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/08 01:40:48 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_space(const char *str, char c)
{
	size_t space;

	space = 0;
	while (*str && *str != c && (*(str - 1) == '\0' || str[0]))
	{
		++space;
		++str;
	}
	return (space);
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

size_t		ft_counter(const char *str, char c)
{
	int i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			++len;
			while (str[i + 1] != '\0' && str[i + 1] != c)
				i++;
		}
		i++;
	}
	return (len);
}

static int	ft_first(char const *s1, char ch)
{
	int i;

	i = 0;
	while (*s1 && *s1 == ch)
	{
		++i;
		++s1;
	}
	return (i);
}

void		ft_free(char **n)
{
	int i;

	i = -1;
	while (n[++i])
		free(n[i]);
	free(n);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	spc;
	size_t	size;
	size_t	count;
	char	**arr;

	size = 0;
	spc = -1;
	if (!s || !(arr = ft_calloc(ft_counter(s, c) + 1, sizeof(char *))))
		return (NULL);
	count = 0;
	while (*s)
	{
		i = ft_first(s, c);
		size = ft_space(s + i, c);
		if (size != 0)
			if (!(arr[count++] = (char *)ft_substr(s, i, size)))
			{
				ft_free(arr);
				return (NULL);
			}
		s = s + i + size;
	}
	arr[count] = 0;
	return (arr);
}
