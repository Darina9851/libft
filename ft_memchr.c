/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:08:03 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:08:30 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t bytes)
{
	unsigned char	*src;
	unsigned char	sym;

	src = (unsigned char *)arr;
	sym = (unsigned char)c;
	while (bytes--)
	{
		if (*src == sym)
			return (src);
		src++;
	}
	return (NULL);
}
