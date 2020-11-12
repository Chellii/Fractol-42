/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 13:34:04 by cel-oiri          #+#    #+#             */
/*   Updated: 2019/08/05 01:28:26 by cel-oiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		help_line(const int fd, char **temp)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];
	char	*oo;

	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buff[ret] = '\0';
		oo = *temp;
		*temp = ft_strjoin(*temp, buff);
		free(oo);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	return (1);
}

void	norm_help(char **line, char **temp)
{
	char *oo;

	*line = ft_strdup("");
	oo = *temp;
	*temp = ft_strsub(*temp, 1, ft_strlen(*temp) - 1);
	free(oo);
}

void	norm_help_two(char **line, char **temp, int i)
{
	char *oo;

	*line = ft_strsub(*temp, 0, i);
	oo = *temp;
	*temp = ft_strdup(*temp + i + 1);
	free(oo);
}

int		inside_gnl(char **line, char **temp, int *i)
{
	if ((*temp)[*i] == '\n')
	{
		norm_help(line, temp);
		return (1);
	}
	while ((*temp)[*i] != '\n' && (*temp)[*i] != '\0')
		(*i)++;
	norm_help_two(line, temp, *i);
	return (1);
}

int		get_next_line(const int fd, char **line, int option)
{
	int			i;
	static char	*temp[4096];

	if (option == 1)
	{
		free(temp[fd]);
		return (-100);
	}
	if (fd < 0 || fd >= 4096 || line == NULL)
		return (-1);
	if (temp[fd] == NULL)
		temp[fd] = ft_strnew(0);
	if (help_line(fd, &(temp[fd])) == -1)
		return (-1);
	i = 0;
	if (temp[fd][i] != '\0')
	{
		return (inside_gnl(line, &(temp[fd]), &i));
	}
	return (0);
}
