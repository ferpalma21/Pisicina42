#include <stdio.h>
#include <unistd.h>
int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	length;

	if (argc == 2)
	{
		length = ft_strlen(argv[1]);
		while (length > 0)
		{
			write(1, &argv[1][length - 1], 1);
			length--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
