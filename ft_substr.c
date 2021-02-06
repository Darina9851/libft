/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:54:26 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:56:24 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*sub;

	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !sub)
		return (NULL);
	i = 0;
	n = 0;
	while (s[i])
	{
		if (i >= start && n < len)
		{
			sub[n] = s[i];
			n++;
		}
		i++;
	}
	sub[n] = '\0';
	return (sub);
}
