/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:57:46 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/16 18:12:01 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	src2 = (char *)src;
	dst2 = (char *)dst;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return ((void *)(dst2));
}
