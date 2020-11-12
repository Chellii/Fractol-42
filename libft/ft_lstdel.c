/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 22:05:03 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/18 22:18:33 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*halst;
	t_list	*halst2;

	halst = *alst;
	while (halst)
	{
		del(halst->content, halst->content_size);
		halst2 = halst->next;
		free(halst);
		halst = halst2;
	}
	*alst = NULL;
}
