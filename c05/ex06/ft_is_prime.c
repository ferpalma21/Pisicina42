/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:21:48 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/08 18:21:23 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	if (nb <= 1)
		return (0);
	if ((nb % 2 != 0 && nb != 2)
		|| (nb % 3 != 0 && nb != 3)
		|| (nb % 5 != 0 && nb != 5)
		|| (nb % 7 != 0 && nb != 7))
	{
		i = 1;
		while (i < nb && nb != 0 && nb != 1)
		{
			result = nb % i;
			if (i == 1 || result > 0)
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("The number 36 is prime '%d'\n", ft_is_prime(36));
	printf("The number 25 is prime '%d'\n", ft_is_prime(25));
	printf("The number 1 is prime '%d'\n", ft_is_prime(1));
	printf("The number 0 is prime '%d'\n", ft_is_prime(0));
	printf("The number 2 is prime '%d'\n", ft_is_prime(2));
	printf("The number 3 is prime '%d'\n", ft_is_prime(3));
	printf("The number 4 is prime '%d'\n", ft_is_prime(4));
	printf("The number -671 is prime '%d'\n", ft_is_prime(-671));
	printf("The number 2147483647 is prime '%d'\n", ft_is_prime(2147483647));
	printf("The number -12 is prime '%d'\n", ft_is_prime(-12));
	printf("The number 5 is prime '%d'\n", ft_is_prime(5));
	printf("The number 6 is prime '%d'\n", ft_is_prime(6));
	printf("The number 7 is prime '%d'\n", ft_is_prime(7));
	printf("The number 8 is prime '%d'\n", ft_is_prime(8));
	printf("The number 9 is prime '%d'\n", ft_is_prime(9));
	printf("The number 10 is prime '%d'\n", ft_is_prime(10));
	printf("The number 11 is prime '%d'\n", ft_is_prime(11));
	printf("The number 500 is prime '%d'\n", ft_is_prime(500));
	printf("The number 177 is prime '%d'\n", ft_is_prime(177));
	return (0);
}
 */