/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:48:55 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/15 17:43:55 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*buf;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min - 1;
	buf = malloc(size * sizeof(int));
	if (buf == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	i = 0;
	while (i <= size)
	{
		buf[i] = min + i;
		i++;
	}
	return (size + 1);
}
/* 
int	main(void)
{
	int	*res;
	int	i;
	int	size;

	res = (int *)1;
	printf("Min size --> 5 || Max size --> 10\n");
	size = ft_ultimate_range(&res, 5, 10);
	printf("\nsize is --> %d\n", size);
	i = 0;
	while (res[i] && *res)
	{
		printf("range 1 --> %d\n", res[i]);
		i++;
	}
	return (0);
}
 */