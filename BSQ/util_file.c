#include "header.h"

struct s_meta	clean_model(char *filename, int c, struct s_meta map)
{
	int				i;

	i = -1;
	map.rows = 0;
	map.cols = 0;
	map.obstacles = -1;
	map.new_col = 0;
	map.file_size = c;
	map.first_row_length = 0;
	map.counter_obs = 0;
	map.next_square_coords[0] = 0;
	map.next_square_coords[1] = 0;
	map = get_rows_from_input(filename, c, map);
	map.obs_coords = (int **) malloc(sizeof(int *) * map.obstacles);
	while (++i < map.obstacles)
		map.obs_coords[i] = (int *) malloc(sizeof(int *) * 2);
	return (map);
}

int	numb_bytes(char	*filename)
{
	int		bytes;
	int		f;
	char	buf;

	bytes = 0;
	f = open(filename, O_RDONLY);
	while (read(f, &buf, 1))
		bytes++;
	close(open(filename, O_RDONLY));
	return (bytes);
}

struct s_meta	set_characters(char *buf, struct s_meta m, int c)
{
	int		i;
	int		j;
	char	*ch;

	m.emptier = buf[m.first_row_length - 4];
	m.blocker = buf[m.first_row_length - 3];
	m.filler = buf[m.first_row_length - 2];
	ch = malloc(sizeof(char *) * m.first_row_length + 1);
	i = -1;
	j = 0;
	while (i < m.first_row_length - 5)
	{
		ch[j] = buf[i + 1];
		i++;
	}
	m.given_rows = ft_atoi(ch);
	i = -1;
	while (++i < c)
	{
		if (buf[i] == m.blocker)
			m.obstacles++;
	}
	return (m);
}

struct s_meta	get_rows_from_input(char *f, int c, struct s_meta m)
{
	int		i;
	int		is_first_line;
	int		fd;
	char	*buf;

	buf = (char *) malloc(sizeof(char) * c + 1);
	i = -1;
	is_first_line = 1;
	read(open(f, O_RDONLY), buf, c);
	while ((++i) < c)
	{
		if (is_first_line)
		{
			m.first_row_length++;
			if (buf[i] == '\n')
				is_first_line = 0;
		}
	}
	m = set_characters(buf, m, c);
	close(open(f, O_RDONLY));
	return (m);
}

struct s_meta	handle_file(char *filename)
{
	int					i;
	int					c;
	int					is_first_n;
	struct s_meta		map;
	char				*b;

	i = -1;
	c = numb_bytes(filename);
	map = clean_model(filename, c, map);
	b = (char *) malloc(sizeof(char) * c + 1);
	while ((++i) < read(open(filename, O_RDONLY), b, c))
	{
		if (is_first_n && b[i + 1] != '\0')
		{
			map = set_metadata(b[i], map);
			if (b[i] == map.blocker)
				map.counter_obs++;
		}
		if (b[i] == '\n')
			is_first_n = 1;
	}
	map.rows++;
	close(open(filename, O_RDONLY));
	return (map);
}
