/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:33:47 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:42:47 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	new = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
		new[j++] = str1[i++];
	i = 0;
	while (str2[i])
		new[j++] = str2[i++];
	return (new);
}
