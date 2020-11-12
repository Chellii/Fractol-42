/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 09:18:06 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 16:55:46 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*help;

	d = (char *)dst;
	s = (char *)src;
	if (!(help = (char*)malloc(sizeof(*help) * len)))
		return (NULL);
	help = ft_memcpy(help, s, len);
	d = ft_memcpy(d, help, len);
	free(help);
	return ((void *)d);
}
