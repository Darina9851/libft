/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:11:53 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:14:13 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	cdest = (char*)dest;
	csrc = (char*)src;
	if (!cdest && !csrc)
		return (NULL);
	while (i < bytes)
	{
		++i;
		*cdest++ = *csrc++;
	}
	return (dest);
}
