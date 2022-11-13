
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd = open(argv[1], O_RDONLY);
	int		fd2 = open(argv[2], O_RDONLY);

	char	*line = NULL;
	int		i = 1;
	int		j = 1;
/*
	while (i > 0)
	{
		i = get_next_line(fileno(stdin), &line);
		printf("%d: %s\n", i, line);
		ft_strdel(&line);
	}
*/
	while (i > 0)
	{
		i = get_next_line(fd, &line);
		printf("%d: %s\n", i, line);
		ft_strdel(&line);
	}
	while (j > 0)
	{
		j = get_next_line(fd2, &line);
		printf("%d: %s\n", j, line);
		ft_strdel(&line);
	}


	//system("leaks a.out");*/
	return (0);
}
