/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 06:38:14 by skgatle           #+#    #+#             */
/*   Updated: 2017/08/26 17:36:12 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		ft_proc_or_save_to_line(char **ln, char **reserve)
{
	char	*tmp;
	char	*tmp2;
	int		lng;

	if (ft_strchr(*reserve, '\n'))
	{
		lng = ft_strlen(*reserve);
		tmp = ft_strsub(*reserve, 0, ft_strlenc(*reserve, '\n'));
		tmp2 = *ln;
		*ln = ft_strjoin(*ln, tmp);
		ft_strdel(&tmp);
		ft_strdel(&tmp2);
		tmp = *reserve;
		*reserve = ft_strsub(*reserve, ft_strlenc(*reserve, '\n') + 1, lng);
		ft_strdel(&tmp);
		return (1);
	}
	tmp = *ln;
	*ln = ft_strjoin(*ln, *reserve);
	ft_strdel(&tmp);
	ft_strdel(reserve);
	*reserve = ft_strnew(BUFF_SIZE + 1);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	static char *reserve;
	int			ret;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || !(*line = ft_strnew(1)))
		return (-1);
	if (!reserve && (reserve = ft_strnew(BUFF_SIZE + 1)))
		if (read(fd, reserve, BUFF_SIZE) == -1)
			return (-1);
	while (1)
	{
		if (ft_proc_or_save_to_line(line, &reserve))
			return (1);
		if ((ret = read(fd, reserve, BUFF_SIZE)) == -1)
			return (-1);
		if (!ret && ft_strlen(*line) == 0)
			return (0);
		else if (!ret && (reserve = ft_strjoin(*line, "\n")))
		{
			ft_strdel(line);
			*line = ft_strnew(1);
		}
	}
}
