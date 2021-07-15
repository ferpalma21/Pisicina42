/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:50:02 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/02 15:05:33 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || (str[i - 1] == 32 && (str[i] >= 'a' && str[i] <= 'z')))
			str[i] -= 32;
		else if ((str[i - 1] == 43 && (str[i] >= 'a' && str[i] <= 'z')))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
