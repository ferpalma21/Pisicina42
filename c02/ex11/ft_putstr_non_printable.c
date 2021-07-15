#include <unistd.h>
#include <stdio.h>

void	ft_print_memory(char *str)
{
	int	i;
	int	b;

	i = 0;
	while (str[i] && str[i] != '\0')
	{
		b = str[i] - '0';
		if (b < -15)
			write(1, "\\0", 2);
		else
			write(1, &str[i], 1);
		i++;
	}
}
