#include "header.h"

struct s_meta	search_square(struct s_meta m);

int	main(int argc, char **argv)
{
	char				*filename;
	struct s_meta		m;
	int					i;

	if (argc != 2)
		filename = "file.txt";
	else
		filename = argv[1];
	m = handle_file(filename);
	if (m.errors == 1)
	{
		write(1, "Error", 6);
		return (1);
	}
	do_your_stuff(transform_data(m, filename, 0, 0));
	print_matrix(m, -1, -1, -1);
	return (0);
}

struct s_meta	do_your_stuff(struct s_meta m)
{
	int	i;
	int	j;
	int	length;

	m.length_square = 1;
	i = 0;
	m = search_square(m);
	return (m);
}
