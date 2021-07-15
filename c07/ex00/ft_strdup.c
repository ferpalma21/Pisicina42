#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		length;
	int		i;

	length = ft_length(src);
	i = 0;
	str = (char *)malloc(sizeof (char *) * (length + 1));
	while (i < length)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("Native Function strdup")
	printf("---> %s\n", strdup("Hack the world today"));
	printf("Custom Function ft_strdup")
	printf("---> %s\n", ft_strdup("Hack the world today"));		
	return (0);
}
*/