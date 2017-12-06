/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:46:57 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/09 18:48:32 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	k = 0;
	if (*(char *)to_find == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k] && j < len)
		{
			j++;
			k++;
			if (to_find[k] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
