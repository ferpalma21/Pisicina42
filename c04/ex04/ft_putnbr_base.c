/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:26:43 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/07 15:28:02 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int length)
{
	int		n;
	char	a;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= length)
		ft_putnbr_base_rec(n / length, base, length);
	a = base[n % length];
	ft_putchar(a);
}

int	ft_sort_string_and_check_char(char *str)
{
	int		i;
	char	tmp;

	printf("---->, %s\n", str);
	i = 0;
	while (str[i])
	{
		if (str[i] > str[i + 1])
		{
			tmp = str[i];
			str = str[i + 1];
			str[i + 1] = tmp;
			i = 0;
		}
		printf("%c ----str \n", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == str[i + 1])
			return (0);
	}
	return (1);
}

int	ft_check_base(char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (!ft_sort_string_and_check_char(base))
		return (0);
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	length = 0;
	if (ft_check_base(base) == 1)
	{
		while (base[length] != '\0')
			length++;
		ft_putnbr_base_rec(nbr, base, length);
	}
}
/*
// #include <stdio.h>
int	main(void)
{
	printf("Base octal of 10 ----> \n");
	ft_putnbr_base(10, "poniguay");
	printf("\nBase binary of 10 ----> \n");
	ft_putnbr_base(10, "01");
	printf("\nBase hexa of 10 ----> \n");
	ft_putnbr_base(10, "0123456789ABCDEF0");
	printf("\nBase decimal of 10 ----> \n");
	ft_putnbr_base(10, "0123456789");
}
*/