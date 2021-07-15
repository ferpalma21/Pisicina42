#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	a[10];
	char	b[10] = "Hello Wor";

	ft_strcpy(a, b);
	printf("%s", a);
}
