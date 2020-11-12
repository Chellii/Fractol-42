/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 14:44:49 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/20 14:48:28 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		n;
	int		*t;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	n = max - min;
	if (!(t = (int*)malloc(n * sizeof(*t))))
		return (0);
	while (i < n)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}
