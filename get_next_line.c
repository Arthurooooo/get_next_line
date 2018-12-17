/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argonthi <argonthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:28:22 by argonthi          #+#    #+#             */
/*   Updated: 2018/12/08 23:52:33 by argonthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_first_part(char *data)
{
	int		i;
	char	*firstpart;

	i = 0;
	while (data[i] && data[i] != '\n')
		i++;
	firstpart = ft_strsub(data, 0, i);
	return (firstpart);
}

char	*get_second_part(char *data)
{
	char	*ptr;

	if (ft_strchr(data, '\n'))
	{
		ptr = ft_strdup(ft_strchr(data, '\n') + 1);
		free(data);
		data = ptr;
	}
	else
		ft_bzero(data, ft_strlen(data));
	return (data);
}

void	check_data(char **data, int fd)
{
	if (!data[fd])
		data[fd] = ft_strnew(BUFF_SIZE + 1);
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	static char	*data[MAX_SIZE];

	if (!line || fd < 0 || (ret = read(fd, buffer, 0)) < 0)
		return (-1);
	check_data(data, fd);
	bzero(buffer, BUFF_SIZE + 1);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		tmp = ft_strjoin(data[fd], buffer);
		ft_strdel(&data[fd]);
		data[fd] = tmp;
		if (ft_strchr(data[fd], '\n'))
			break ;
	}
	*line = get_first_part(data[fd]);
	if (!ft_strcmp(data[fd], ""))
		return (0);
	data[fd] = get_second_part(data[fd]);
	return (1);
}
