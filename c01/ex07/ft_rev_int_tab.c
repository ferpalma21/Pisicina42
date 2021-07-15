/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:55:22 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/06/28 15:41:55 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	low_index;
	int	high_index;

	low_index = 0;
	high_index = size - 1;
	while (++low_index < --high_index)
	{
		a = tab[low_index];
		tab[low_index] = tab[high_index];
		tab[high_index] = a;
	}
	write(1, &low_index, 1);
}
