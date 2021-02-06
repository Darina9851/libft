/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:03:33 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:06:40 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *sourse, int ch, size_t bytes)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csourse;

	i = 0;
	cdest = (unsigned char*)dest;
	csourse = (unsigned char*)sourse;
	while (i < bytes)
	{
		*(cdest + i) = *(csourse + i);
		if (*(csourse + i) == (unsigned char)ch)
			return (cdest + i + 1);
		i++;
	}
	return (NULL);
}
