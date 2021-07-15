#ifndef FT_METADA_H
# define FT_METADA_H

struct s_meta
{
	int		rows;
	int		cols;
	int		counter_obs;
	int		obstacles;
	int		new_col;
	int		**obs_coords;
	int		given_rows;
	int		first_row_length;
	int		square_coords[2];
	int		next_square_coords[2];
	int		length_square;
	int		errors;
	int		file_size;
	char	**map_chars;
	char	emptier;
	char	blocker;
	char	filler;
};

#endif