int	get_index(char c)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		if (c == &i)
			return (i - 97 + 1);
	}
	return (1);
}

void	print_char(char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		write(1, c, 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	l;

	if (argc == 2)
	{
		i = 0;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				k = get_index(argv[i][j]);
				print_char(argv[i][j], k);
				i++;
				j++;
			}
		}
	}
	write(1, '\n', 1);
}
