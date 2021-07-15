#include <unistd.h>
char	ft_rot13(char c)
{
	if (('a' <= c && 'n' > c) || ('A' <= c && 'N' > c))
	{
		c += 13;
	}
	else if (('n' <= c && 'z' >= c) || ('N' <= c && 'Z' >= c))
	{
		c -= 13;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = ft_rot13(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	return (0);
}
