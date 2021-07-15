int	ft_strlen(char *str)
{
	int	i;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("The length of 'Hack the World' is %d", ft_strlen("Hack the world"));
}
