
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_size_file(char *argv)
{
	int		size;
	char	buf;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}

#define ROW 5
#define COL 5

int	largest_square(char square[ROW][COL])
{
	int		i;
	int		j;
	int		k;
	int		max_square;
	int		vertical;
	int		horizontal;

	i = 0;
	j = 0;
	max_square = 0;
	vertical = 0;
	horizontal = 0;
	k = i;
	while (square[i][j] != '\0')
	{
		if (square[i][j] == '.')
		{
			while (square[k][j] == '.')
			{
				vertical++;
				k++;
			}
			k = j;
			while (square[i][k] == '.')
			{
				horizontal++;
				k++;
			}
			if (vertical > max_square)
				max_square = vertical;
			if (horizontal > max_square)
				max_square = horizontal;
			j++;
			if (square[i][j] == '\0')
			{
				j = 0;
				i++;
			}
		}
		else
		{
			j++;
			if (square[i][j] == '\0')
			{
				j = 0;
				i++;
			}
		}
	}
	return (max_square * max_square);
}

int	main(void)
{
	int		i;
	int		j;
	char	map[5][5] = {{'.', '.', '.', '.', 'o',},
	{'.', '.', '.', 'o', '.'},
	{'o', '.', '.', 'o', '.'},
	{'.', '.', '.', 'o', '.'},
	{'.', '.', '.', 'o', '.'}};
	char	output[2];

	i = 0;
	largest_square(map);
	while (i < ROW)
	{
		j = 0;
		while (j < COL)
		{
			output[0] = map[i][j];
			output[1] = ' ';
			write(STDOUT_FILENO, output, 2);
			j++;
		}
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
