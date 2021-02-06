/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:19:33 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 21:03:45 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		negative;

	i = 0;
	result = 0;
	negative = 1;
	while (*(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\v' || \
			*(str + i) == ' ' || *(str + i) == '\r' || *(str + i) == '\f')
		i++;
	if (*(str + i) == '-')
		negative = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9' && \
			result < 2147483648)
		result = (result * 10) + (*(str + i++) - '0');
	if (result * negative > 2147483647)
		return (-1);
	if (result * negative < -2147483648)
		return (0);
	return (result * negative);
}
