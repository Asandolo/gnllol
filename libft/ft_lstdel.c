/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:11:48 by asandolo          #+#    #+#             */
/*   Updated: 2017/11/14 10:38:32 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;

	tmp = *alst;
	while (tmp)
	{
		next = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = next;
	}
	*alst = NULL;
}
