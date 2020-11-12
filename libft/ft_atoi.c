/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 09:56:45 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/04/27 16:42:55 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] < 33 && (str[i] != '\e' && str[i] != '\200'))
		i++;
	if (str[i] == '-')
	{
		sign = 0;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
			break ;
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return ((sign == 1) ? n : -n);
}
