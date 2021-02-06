/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:51:46 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:53:18 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char			*n;
	unsigned char	ach;

	n = 0;
	ach = (unsigned char)ch;
	while (*str)
	{
		if (*str == ach)
		{
			n = (char *)str;
		}
		str++;
	}
	if (*str == 0 && ach == 0)
		n = (char *)str;
	return (n);
}
