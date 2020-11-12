/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 14:51:47 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/20 14:56:02 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_table(int *tab, int size)
{
	int i;
	int j;
	int c;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				c = tab[i];
				tab[i] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		i++;
	}
}
