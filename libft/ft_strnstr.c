/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:26:33 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 16:53:22 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char*)haystack;
	i = 0;
	if (!*needle)
		return (s);
	while (s[i] && i < len)
	{
		j = 0;
		while (needle[j] == s[i + j] && j + i < len)
		{
			j++;
			if (needle[j] == '\0')
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
