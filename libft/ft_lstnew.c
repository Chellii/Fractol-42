/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 20:32:01 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/18 22:18:52 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *l;

	if (!(l = (void*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		if (!(l->content = (void*)malloc(sizeof(*content) * content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	l->next = NULL;
	return (l);
}
