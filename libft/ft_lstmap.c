/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 22:50:24 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/20 15:18:29 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst2;
	t_list	*lst_new;
	t_list	*lst_new2;

	if (!lst || !f)
		return (NULL);
	lst2 = lst;
	lst_new = f(lst2);
	lst_new2 = lst_new;
	lst2 = lst2->next;
	while (lst2)
	{
		lst_new2->next = f(lst2);
		lst_new2 = lst_new2->next;
		lst2 = lst2->next;
	}
	lst_new2->next = NULL;
	return (lst_new);
}
