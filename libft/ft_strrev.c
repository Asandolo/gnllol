/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:09:38 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/07 15:09:58 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		len;
	char	tmp;
	int		start;

	start = 0;
	len = ft_strlen(str) - 1;
	while (start <= len)
	{
		tmp = *(str + len);
		str[len] = *(str + start);
		str[start] = tmp;
		start++;
		len--;
	}
	return (str);
}
