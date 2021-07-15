/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:38:06 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/08 13:27:58 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

/*int	main(void)
{
	int	a;

	a = ft_iterative_factorial(5);
	printf("a ---> %d", a);
	write(1, &a, 1);
}
*/