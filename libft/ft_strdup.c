/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:30:12 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:42:42 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*new;

	new = ft_strnew(ft_strlen((char *)s1));
	if (!new)
		return (NULL);
	ft_strcpy(new, s1);
	return (new);
}
