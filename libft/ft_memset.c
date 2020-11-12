/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:51:52 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/16 18:31:40 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*src;

	i = 0;
	src = (unsigned char*)b;
	while (i < len)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
