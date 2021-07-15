#include <stdlib.h>
#include "structure.c"
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

struct s_meta	add_double_pointer(struct s_meta m)
{
	int		i;

	i = -1;
	m.map_chars = (char **) malloc(sizeof(char *) * m.rows);
	while (++i < m.rows)
		m.map_chars[i] = (char *) malloc(sizeof(char *) * m.cols + 1);
	return (m);
}

char	*get_buf(char *f, int size)
{
	int		fd;
	char	*buf;

	buf = (char *) malloc((sizeof(char) * size) + 1);
	fd = open(f, O_RDONLY);
	read(fd, buf, size);
	return (buf);
}

struct s_meta	transform_data(struct s_meta m, char *f, int i, int j)
{
	int		k;
	char	*buf;

	buf = get_buf(f, m.file_size);
	m = add_double_pointer(m);
	i = 0;
	k = m.first_row_length;
	while (i < m.rows)
	{
		j = 0;
		while (j < m.cols)
		{
			if (buf[k] == m.blocker
				|| buf[k] == m.filler
				|| buf[k] == m.emptier)
			{
				m.map_chars[i][j] = buf[k];
				j++;
			}
			k++;
		}
		m.map_chars[i][j] = '\0';
		i++;
	}
	return (m);
}
