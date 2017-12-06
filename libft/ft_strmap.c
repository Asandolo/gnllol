/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:40:22 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:43:11 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (*s)
		*str++ = f(*s++);
	return (str - len);
}
