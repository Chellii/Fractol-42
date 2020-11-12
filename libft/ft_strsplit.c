/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:54:04 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/09/20 14:30:39 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		search_end_word(int begin, char *str, char c)
{
	int	tmp;

	tmp = begin;
	while (str[begin] != c && str[begin] != '\0')
		begin++;
	if (str[begin] == '\0')
	{
		begin--;
		if (str[begin] == c)
			return (-5);
	}
	else
		begin--;
	return (begin);
}

int		search_space(int begin, char *str, char c)
{
	while (str[begin] == c)
		begin++;
	return (begin);
}

int		count_words(char *str, char c)
{
	int	rslt;
	int	begin;
	int	end;
	int	str_size;

	rslt = 0;
	begin = 0;
	end = 0;
	str_size = 0;
	while (str[str_size])
		str_size++;
	while (begin < str_size)
	{
		begin = search_space(begin, str, c);
		end = search_end_word(begin, str, c);
		while (begin <= end)
			begin++;
		if (end != -5)
			rslt++;
	}
	return (rslt);
}

char	*implemet_str(int *begin, int end, char *str)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc(sizeof(char) * (end - *begin + 2));
	while (*begin <= end)
	{
		s[i++] = str[*begin];
		*begin += 1;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		rows;
	int		begin;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	tab = NULL;
	rows = count_words((char *)str, c);
	begin = 0;
	if ((tab = (char **)malloc(sizeof(char*) * (rows + 1))) == NULL)
		return (NULL);
	while (i < rows)
	{
		begin = search_space(begin, (char *)str, c);
		end = search_end_word(begin, (char *)str, c);
		if ((tab[i] = implemet_str(&begin, end, (char *)str)) == NULL)
			return (NULL);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
