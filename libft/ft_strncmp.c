/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:27:25 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/19 18:21:55 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (n == 0 || (!*str1 && !*str2))
		return (0);
	if (!*str1 && *str2)
		return (-1);
	if (!*str2 && *str1)
		return (1);
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (str1[i] == '\0' && i != 0 && i != n)
		return (str1[i] - str2[i]);
	if (str2[i] == '\0' && i != 0 && i != n)
		return (str1[i] - str2[i]);
	return (0);
}
