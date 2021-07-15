#include <unistd.h>
#include "structure.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(struct s_meta map, int x, int y, int i)
{
	while (++i < map.obstacles)
	{
		while (++x < map.rows)
		{
			while (++y < map.cols)
			{
				if (i < map.obstacles && map.obs_coords[i][0] == x
					&& map.obs_coords[i][1] == y + 1)
				{
					ft_putchar(map.blocker);
					i++;
				}
				else
					ft_putchar(map.emptier);
			}
			y = -1;
			ft_putchar('\n');
		}
	}
}
