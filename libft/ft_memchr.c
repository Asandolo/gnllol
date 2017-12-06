/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:46:37 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:47 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	t;
	int				i;

	i = 0;
	t = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (str[i] == t)
			return (str + i);
		i++;
	}
	return (NULL);
}
