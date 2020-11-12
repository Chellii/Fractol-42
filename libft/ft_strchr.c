/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:42:33 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 02:08:17 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *scp;

	scp = (char *)s;
	while (*scp)
	{
		if (*scp == (char)c)
			return (scp);
		scp++;
	}
	if ((char)c == '\0')
		return (scp);
	return (NULL);
}
