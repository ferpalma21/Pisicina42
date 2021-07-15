/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:21:49 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/06 11:28:25 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	printf("La frase 'hack the world"); 
 	printf("cotinene '%d' número de caracteres", ft_strlen("hack the world"));
	printf("\n");
}
*/