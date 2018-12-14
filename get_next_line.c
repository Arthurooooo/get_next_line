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

char *get_first_part(char *data){
	char * firstpart;
	int i;

	i = 0;
	while(data[i] && data[i] != '\n')
	{
		i++;
	}
	firstpart = ft_strsub(data, 0, i);
	return firstpart;

}
char *get_second_part(char *data)
{
	char *ptr;
	if(ft_strchr(data, '\n'))
	{
		ptr = ft_strdup(ft_strchr(data,'\n') + 1);
		ft_bzero(data, ft_strlen(data));
		data = ft_strjoin("", ptr);
	}
	else
		ft_bzero(data, ft_strlen(data));
	return  data;
}

int get_next_line(const int fd, char **line)
{
	int c;
	int ret = 0;
	c = 0;
	char buffer[BUFF_SIZE + 1];
	static char *data = NULL;
	int cnt;
	cnt = 0;
	char *tmp;

		if (!data) //if there's no previous static
			data = (char *)malloc(sizeof(*data)); //then malloc the static
			bzero(buffer, BUFF_SIZE + 1); // vide le buffer
		if ((ret = read(fd, buffer, 0)) < 0)
		{
			return -1;
		}
		while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			buffer[ret] = '\0';
			tmp = ft_strjoin(data, buffer);
			ft_strdel(&data);
			data = ft_strdup(tmp);
			ft_strdel(&tmp);
			if (ft_strchr(data, '\n'))
				break;
		}
		if (!ft_strcmp(data, ""))
			return (0);
		*line = get_first_part(data);
		data = get_second_part(data);
		return 1;
}

// int			main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	char *line = NULL;
// 	int fd;

// 	fd = open(argv[1], O_RDONLY);

// 	while (get_next_line(fd, &line) > 0)
// 	{
// 			printf("%s\n", line);
// 		free(line);
// 		line = NULL;
// 	}
// 	close(fd);
// 	return (0);
// }
