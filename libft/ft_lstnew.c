/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:29:03 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:37 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ret;

	if (!(ret = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ret->content = NULL;
		ret->content_size = 0;
	}
	else
	{
		if (!(ret->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(ret->content, content, content_size);
		ret->content_size = content_size;
	}
	ret->next = NULL;
	return (ret);
}
