/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrouve <ctrouve@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:23:05 by ctrouve           #+#    #+#             */
/*   Updated: 2022/01/04 20:45:53 by ctrouve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd = open(argv[1], O_RDONLY);
	int		fd2 = open(argv[2], O_RDONLY);
	int		fd3 = open(argv[3], O_RDONLY);

	char	*line = NULL;
	int		i = 1;
	int		j = 1;
	int		k = 1;

	if (argc < 1)
		return (0);

	printf("*** stdin ***\n");/* usage: echo "abcdef\nabcdef\0" | ./a.out */
	while (i > 0)
	{
		i = get_next_line(fileno(stdin), &line);
		printf("%d: %s\n", i, line);
		ft_strdel(&line);
	}
/*
	printf("*** %s ***\n", argv[1]);
	while (i > 0)
	{
		i = get_next_line(fd, &line);
		printf("%d: %s\n", i, line);
		ft_strdel(&line);
	}

	printf("*** %s ***\n", argv[2]);
	while (j > 0)
	{
		j = get_next_line(fd2, &line);
		printf("%d: %s\n", j, line);
		ft_strdel(&line);
	}

	printf("*** %s ***\n", argv[3]);
	while (k > 0)
	{
		k = get_next_line(fd3, &line);
		printf("%d: %s\n", k, line);
		ft_strdel(&line);
	}

	//system("leaks a.out");
*/
	return (0);
}
