/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:42:10 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:45 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*maloc;

	maloc = (void *)malloc(size * sizeof(size_t));
	if (!maloc)
		return (NULL);
	ft_bzero(maloc, size);
	return (maloc);
}
