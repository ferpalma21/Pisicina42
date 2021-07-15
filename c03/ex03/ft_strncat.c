/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:20:00 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/09 12:31:26 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// char    *ft_strncat(char *dest, char *src, unsigned int nb)
// {
//     unsigned int    i;
//     unsigned int    k;
//     i = 0;
//     k = 0;
//     while (dest[i])
//     {
//         i++;
//     }
//     while (src[k] && k < nb - 1)
//     {
//         dest[i] = src[k];
//         i++;
//         k++;
//         printf("%d\n", k);
//     }
//     dest[i] = '\0';
//     printf("%s\n", dest);
//     return (dest);
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;
	char			*s;

	s = dest;
	i = 0;
	j = 0;
	while (s[j] && s[j] != '\0')
		j++;
	while (src[i] && i < nb)
	{
		s[j] = src[i];
		j++;
		i++;
	}
	s[j] = '\0';
	return (s);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			dest[100];
	char			dest2[100];

	printf("Example with native strncat:\n");
	printf("Result: \n");
	printf("%s", strncat(dest, "Hack the world,", 100));
	printf("\n");
	printf("%s", strncat(dest, " today", 100));
	printf("\n");
	printf("\nExample with customized ft_strncat function\n");
	printf("Result: \n");
	printf("%s", ft_strncat(dest2, "Hack the world,", 100));
	printf("\n");
	printf("%s", ft_strncat(dest2, " today", 100));
} */
