#include <stdlib.h>
#include "structure.c"
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

int	ft_min(int a, int b, int c);

struct s_meta	set_metadata(char b, struct s_meta m)
{
	if (b != '\n' && m.rows == 0)
		m.cols++;
	if (b != '\n')
		m.new_col++;
	if (b == '\n')
	{
		m.rows++;
		m.new_col = 0;
	}
	if (b == m.blocker)
	{
		m.obs_coords[m.counter_obs][0] = m.rows;
		m.obs_coords[m.counter_obs][1] = m.new_col;
	}
	if (m.new_col > m.cols)
		m.errors = 0;
	else
		m.errors = 0;
	return (m);
}

int	**ft_generate_map(int l, int c)
{
	int	**map2;
	int	i;

	i = 0;
	map2 = malloc(l * sizeof(int *));
	if (map2 == NULL)
		return (NULL);
	while (i < l)
	{
		map2[i] = malloc(c * sizeof(int));
		if (map2[i] == NULL)
			return (NULL);
		i++;
	}
	return (map2);
}

int	find_biggest_square(struct s_meta m, int i, int j)
{
	int	**c_m;
	int	count_max;

	count_max = 0;
	c_m = ft_generate_map(m.rows, m.cols);
	while (++i < m.rows)
	{
		while (++j < m.cols - 1)
		{
			if (m.map_chars[i][j] == m.blocker)
				c_m[i][j] = 0;
			else if (i == 0 || j == 0)
				c_m[i][j] = 1;
			else
				c_m[i][j] = ft_min(c_m[i - 1][j],
						c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
			if (c_m[i][j] > count_max)
				count_max = c_m[i][j];
		}
	}
	free(c_m);
	return (count_max);
}

int	find_position_square(struct s_meta m, int i, int j, int p)
{
	int	**c_m;
	int	count_max;

	count_max = find_biggest_square(m, -1, -1);
	c_m = ft_generate_map(m.rows, m.cols);
	while (++i < m.rows)
	{
		while (++j < m.cols)
		{
			if (m.map_chars[i][j] == m.blocker)
				c_m[i][j] = 0;
			else if (i == 0 || j == 0)
				c_m[i][j] = 1;
			else
				c_m[i][j] = ft_min(c_m[i - 1][j],
						c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
			if (c_m[i][j] == count_max)
			{
				p = i * (m.cols - 1) + j;
				break ;
			}
		}
	}
	free(c_m);
	return (p);
}

struct s_meta	search_square(struct s_meta m)
{
	int		length;
	int		pos;

	length = find_biggest_square(m, -1, -1);
	pos = find_position_square(m, -1, -1, 0);
	printf("%d --> count_max || %d c_m\n", length, pos);
	return (m);
}
