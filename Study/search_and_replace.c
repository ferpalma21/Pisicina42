#include <unistd.h>
#include <stdio.h>

char	search_and_replace(char c, char d, char e)
{
	if (c == d)
		c = e;
	return (c);
}

int	has_a_letter(char *argv, char d)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (argv[i])
	{
		if (argv[i] == d)
			counter++;
		i++;
	}
	return (counter);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		counter;
	char	c;

	if (argc == 4)
	{
		counter = has_a_letter(argv[1], argv[2][0]);
		if (counter > 0)
		{
			i = 0;
			j = 0;
			while (argv[1][i])
			{
				c = argv[1][i];
				c = search_and_replace(argv[1][i], argv[2][0], argv[3][0]);
				write(1, &c, 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
