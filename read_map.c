/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:47:58 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/17 21:00:13 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

char *get_next_line(int fd)
{
	int r;
	char *line = NULL;
	char buff;
	int i;

	i = 0;
	r = 1;
	buff = 0;
	fd = 0;
	while(line)
	{
		if(r > 0)
			r = read(1,&buff,1);
		line[i] = buff;
		if(r <= 0)
			break;
		i++;
	}
	line[i] = '\0';
	return(line);
}

char	**read_map(char *path)
{
	char	*buff;
	char 	*aid;
	char	*line = NULL;
	char	**str;

	int fd = open(path,O_RDONLY);
	if(fd == -1)
		return 0;
	buff = ft_strdup("");
	if (!buff)
		return (NULL);
	while (1)
	{
		line = get_next_line(fd);
		aid = buff;
		buff = ft_strjoin(line,aid);
		free(aid);
	}
	str = ft_split(line,'\n');
	free(buff);
	return (str);
}
