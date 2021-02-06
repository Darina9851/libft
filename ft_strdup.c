/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:28:07 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:30:02 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	mem;
	char	*result;

	mem = ft_strlen(str) + 1;
	result = (char *)malloc(mem);
	if (result == NULL)
		return (NULL);
	if (result == (char *)0)
		return ((char *)0);
	return ((char *)ft_memcpy(result, str, mem));
}
