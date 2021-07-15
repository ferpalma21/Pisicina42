#include <unistd.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	compare_str(char *str1, char *str2)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				i++;
				counter++;
			}
			j++;
		}
		break ;
	}
	return (counter);
}

int	main(int argc, char **argv)
{
	int	counter;
	int	length;
	int	i;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	length = ft_strlength(argv[1]);
	counter = compare_str(argv[1], argv[2]);
	if (counter == length)
	{
		i = -1;
		while (argv[1][++i])
		{
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
