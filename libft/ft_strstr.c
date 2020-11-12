/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:24:08 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 02:54:18 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char*)haystack;
	i = 0;
	if (!*needle)
		return (s);
	while (s[i])
	{
		j = 0;
		while (needle[j] == s[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
