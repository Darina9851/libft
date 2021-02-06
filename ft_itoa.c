/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:57:19 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 23:11:55 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	if (len == 0)
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	k;
	char	*str;

	k = n;
	i = ft_len(k);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (k == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (k < 0)
	{
		str[0] = '-';
		k = k * -1;
	}
	while (k > 0)
	{
		str[i--] = 48 + (k % 10);
		k = k / 10;
	}
	return (str);
}
