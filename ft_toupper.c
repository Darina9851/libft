/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:58:19 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/06 20:58:23 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 'a' + 'A');
	return (ch);
}