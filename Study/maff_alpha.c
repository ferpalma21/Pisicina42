#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int	i;
	int	b;

	i = 97;
	while (i <= 122)
	{
		if (i % 2 == 0)
		{
			b = i - 32;
			write(1, &b, 1);
		}
		else
			write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
