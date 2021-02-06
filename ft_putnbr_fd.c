/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:39:00 by rquenten          #+#    #+#             */
/*   Updated: 2020/11/08 03:15:42 by rquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char ch;

	ch = 0;
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd(n / 10, fd);
		if (n < 0)
			ft_putnbr_fd(-(n % 10), fd);
		else
			ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		ch = n + 48;
		write(fd, &ch, 1);
	}
}
