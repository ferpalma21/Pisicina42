/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:22:18 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/07 11:08:27 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
/*
#include <stdio.h>
int	main(void)
{
 	printf("Printing the number '1000000' with ft_putchar --> \n");
 	ft_putnbr(1000000);
 	printf("\nPrinting the number '350' with ft_putchar --> \n");
 	ft_putnbr(350);
 	printf("\nPrinting the number '899' with ft_putchar --> \n");
 	ft_putnbr(899);
 	printf("\nPrinting the max value '2147483647' with ft_putchar --> \n");
 	ft_putnbr(2147483647);
 	printf("\nPrinting the min value '-2147483647' with ft_putchar --> \n");
 	ft_putnbr(-2147483647);
 	printf("\nPrinting the below min value '-2147483648' with ft_putchar --> \n");
 	ft_putnbr(-2147483648);
 	printf("\n");
}
*/