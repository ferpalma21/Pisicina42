/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:36:25 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/02 14:24:17 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || ((str[i] > 'Z') && (str[i] < 'a')) || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
