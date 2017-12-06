/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 20:58:45 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:46 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	t;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	t = (char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == t)
			return (dst + (i + 1));
		i++;
	}
	return (NULL);
}
