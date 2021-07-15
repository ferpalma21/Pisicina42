/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:54:02 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/07 18:45:57 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	count;
	int	h;

	i = 0;
	count = 0;
	h = size;
	while (i < (h) && src[i] != '\0' && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	while (dest[count] != '\0')
		count++;
	return (count);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	s1 = "";
	s2 = "Hello World A lot";
	printf("Using orignal strcmp function \n");
	printf("Result: %lu", strlcpy(s1, s2, 10));
	printf("\nUsing customized ft_strcmp function \n");
	printf("Result: %d", ft_strlcpy(s1, s2, 10));
}