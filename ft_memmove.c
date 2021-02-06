/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:15:41 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 21:24:21 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t bytes)
{
	char	*csource;
	char	*cdest;
	size_t	i;

	i = 0;
	csource = (char *)source;
	cdest = (char *)dest;
	if (!cdest && !csource)
		return (NULL);
	if (csource < cdest)
	{
		while (bytes)
		{
			bytes--;
			*(cdest + bytes) = *(csource + bytes);
		}
	}
	else
		while (i < bytes)
		{
			*(cdest + i) = *(csource + i);
			i++;
		}
	return (dest);
}
