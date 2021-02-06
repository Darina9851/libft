/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:31:48 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:33:14 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t l;

	i = ft_strlen(dest);
	l = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[l] && i + l < (size - 1))
	{
		dest[l + i] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (ft_strlen(src) + i);
}
