#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	while (argc > 1 && argv[argc - 1][++i])
		write(1, &argv[argc - 1][i], 1);
	write(1, "\n", 1);
	return (0);
}
