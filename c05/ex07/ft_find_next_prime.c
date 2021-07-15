/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:43:14 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/08 16:01:26 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
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

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483646)
		return (0);
	nb++;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("nxt prime of nb 3 is '%d'\n", ft_find_next_prime(3));
	printf("nxt prime of nb 1 is '%d'\n", ft_find_next_prime(1));
	printf("nxt prime of nb 2147483646")
	printf(" is '%d'\n", ft_find_next_prime(2147483646));
	printf("nxt prime of nb 8 is '%d'\n", ft_find_next_prime(8));
	printf("nxt prime of nb 500 is '%d'\n", ft_find_next_prime(500));
	printf("nxt prime of nb 79 is '%d'\n", ft_find_next_prime(79));
	printf("nxt prime of nb 34 is '%d'\n", ft_find_next_prime(34));
	printf("nxt prime of nb 57 is '%d'\n", ft_find_next_prime(57));
	printf("nxt prime of nb 890 is '%d'\n", ft_find_next_prime(890));
	printf("nxt prime of nb 345 is '%d'\n", ft_find_next_prime(345));
	printf("nxt prime of nb 169 is '%d'\n", ft_find_next_prime(169));
}
 */