/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:43:31 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/07/15 16:47:47 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s)
	{
		i = start;
		j = 0;
		if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
			return (0);
		while (j < len)
		{
			str[j] = s[i];
			i++;
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
