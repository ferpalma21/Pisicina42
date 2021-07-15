/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:01:46 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/08 15:44:16 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147395600)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	printf("root of 8 is '%d'\n", ft_sqrt(8));
	printf("root of -1 is '%d'\n", ft_sqrt(-1));
	printf("root of -27 is '%d'\n", ft_sqrt(-27));
	printf("root of -70 is '%d'\n", ft_sqrt(-70));
	printf("root of 2147483647 is '%d'\n", ft_sqrt(2147483647));
	printf("root of 2147395600 is '%d'\n", ft_sqrt(2147395600));
	printf("root of -54 is '%d'\n", ft_sqrt(-54));
	printf("root of 9 is '%d'\n", ft_sqrt(9));
	printf("root of 25 is '%d'\n", ft_sqrt(25));
	printf("root of 169 is '%d'\n", ft_sqrt(169));
}
 */