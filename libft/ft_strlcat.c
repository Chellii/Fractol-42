/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:52:36 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 16:37:19 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;

	lend = (size_t)(ft_strlen(dst));
	lens = (size_t)(ft_strlen(src));
	if (lend >= size)
		return (size + lens);
	else
		ft_strncat(dst, src, size - lend - 1);
	return (lens + lend);
}
