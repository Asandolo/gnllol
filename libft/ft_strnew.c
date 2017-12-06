/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:46:07 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/07 11:46:45 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
