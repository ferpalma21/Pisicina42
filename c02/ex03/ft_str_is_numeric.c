/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:50:24 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/06/28 18:25:14 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	b;

	i = 0;
	while (str[i])
	{
		b = str[i] - '0';
		if (b < 0 || b > 9)
		{	
			return (0);
		}
		i++;
	}
	return (1);
}
