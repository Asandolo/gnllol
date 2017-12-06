/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:40:32 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:43:10 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	str = ft_strnew(len);
	i = 0;
	if (!str)
		return (NULL);
	while (*s)
		*str++ = f(i++, *s++);
	return (str - len);
}
