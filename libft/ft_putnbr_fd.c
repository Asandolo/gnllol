/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:56:27 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:42:17 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_display_fd(int fd)
{
	ft_putstr_fd("-2147483648", fd);
}

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_display_fd(fd);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar_fd('-', fd);
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putnbr_fd(nb % 10, fd);
		}
		else
		{
			ft_putchar_fd(nb + '0', fd);
		}
	}
}
