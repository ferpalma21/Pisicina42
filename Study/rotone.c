#include <unistd.h>
char	rotone(char c)
{
	if ('a' <= c && 'z' > c)
		c += 1;
	if ('z' == c)
		c = 'a';
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
			c = rotone(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}	
}
