/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:30:19 by ldurante          #+#    #+#             */
/*   Updated: 2021/05/06 12:43:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		ret;

	fd = open("text.txt", O_RDONLY);
	ret = get_next_line(fd, &line);
	while (ret >= 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
		if (ret == 0)
			break ;
		ret = get_next_line(fd, &line);
	}
	free(line);
	system("leaks a.out");
	close(fd);
	return (0);
}
