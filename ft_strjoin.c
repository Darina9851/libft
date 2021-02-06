/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:30:15 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:31:30 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*str;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		n = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (i + n + 1));
		if (str == NULL)
			return (NULL);
	}
	i = 0;
	n = 0;
	if (s1)
		while (s1[n])
			str[i++] = s1[n++];
	n = 0;
	if (s2)
		while (s2[n])
			str[i++] = s2[n++];
	str[i] = '\0';
	return (str);
}
