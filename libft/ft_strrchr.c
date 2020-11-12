/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:22:15 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 02:30:42 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scp;
	int		n;
	int		i;

	if (c == 0)
		return ((char*)(s + ft_strlen(s)));
	n = ft_strlen(s);
	i = 0;
	scp = (char *)(s + n);
	while (i <= n)
	{
		if (*scp == (char)c)
			return (scp);
		scp--;
		i++;
	}
	return (NULL);
}
