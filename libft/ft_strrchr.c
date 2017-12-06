/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:49:50 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/11 14:46:06 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	str = str + ft_strlen(str);
	while (*str != (char)c && str != s)
		str--;
	if (*str == (char)c)
		return (str);
	return (NULL);
}
