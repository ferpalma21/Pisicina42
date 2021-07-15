#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}
