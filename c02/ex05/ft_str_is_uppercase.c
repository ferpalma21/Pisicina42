/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:50:30 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/06/29 15:13:24 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	b;

	i = 0;
	while (str[i])
	{
		b = str[i] - '0';
		if (b <= 16 || b >= 43)
			return (0);
		i++;
	}
	return (1);
}