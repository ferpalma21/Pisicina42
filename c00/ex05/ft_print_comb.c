#include <unistd.h>

void	ft_print_comb(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = 47;
	while (n1++ <= 55)
	{		
		n2 = n1;
		while (n2++ <= 56)
		{
			n3 = n2;
			while (n3++ <= 57)
			{
				if (n3 != 58)
				{
					write(1, &n1, 1);
					write(1, &n2, 1);
					write(1, &n3, 1);
					write(1, ", ", 1);
				}
			}
		}
	}
}
