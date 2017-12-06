/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:33:49 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:08 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	int		ret;
	long	isneg;

	i = 0;
	isneg = 0;
	ret = 0;
	while ((str[i] >= 9 && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		isneg = (str[i] == '-') ? 1 : 0;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	if (isneg >= 1)
		ret *= -1;
	return (ret);
}
