/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:02:23 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:42:19 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_display(void)
{
	ft_putstr("-2147483648");
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_display();
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
