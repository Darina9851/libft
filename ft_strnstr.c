/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:40:25 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:45:54 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	unsigned int n;
	unsigned int i;

	n = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[0] != '\0' && (size_t)n < len)
	{
		i = 1;
		if (str1[n] == str2[0])
		{
			while (str2[i] != '\0' && str1[n + i] == str2[i] && \
							(size_t)(n + i) < len)
				i++;
			if (str2[i] == '\0')
				return ((char *)&str1[n]);
		}
		++n;
	}
	return (NULL);
}
