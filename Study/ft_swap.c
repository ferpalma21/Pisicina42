#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	*a = 10;
	int	*b = 15;

	printf("A --> %d ||| B --> %d", *a, *b);
	ft_swap(a, b);
	printf("A --> %d ||| B --> %d", *a, *b);
}
