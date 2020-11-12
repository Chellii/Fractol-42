/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:35:37 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 17:59:32 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	first_sp(char *s)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(s)
			&& (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	return (i);
}

static size_t	last_sp(char *s)
{
	int j;

	j = ft_strlen(s);
	j = j - 1;
	while ((j > 0) && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j--;
	return (j);
}

char			*ft_strtrim(char const *s)
{
	char		*str;
	size_t		i;
	size_t		j;

	if (s)
	{
		i = 0;
		j = ft_strlen(s);
		i = first_sp((char*)s);
		if (i == j)
		{
			str = (char*)malloc(1);
			str[0] = '\0';
			return (str);
		}
		if (j != 0)
		{
			j = last_sp((char*)s);
			j++;
		}
		str = ft_strsub(s, i, j - i);
		return (str);
	}
	return (NULL);
}
