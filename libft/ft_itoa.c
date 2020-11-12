/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 22:41:23 by cel-oiri          #+#    #+#             */
/*   Updated: 2018/10/18 05:50:12 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		tnbr(int n)
{
	int cpt;

	cpt = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		cpt++;
		n /= 10;
	}
	return (cpt);
}

char			*ft_itoa(int n)
{
	int		size;
	int		signe;
	char	*str;
	int		i;

	signe = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	size = tnbr(n) + signe;
	i = size - 1;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i >= 1)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
	str[i] = (signe == 1) ? '-' : (n % 10) + '0';
	str[size] = '\0';
	return (str);
}
