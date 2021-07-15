/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:40:33 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/05 19:20:52 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str1;
	char	*str2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		str1 = str;
		str2 = to_find;
		while (*str2 && *str1 == *str2)
		{
			++str1;
			++str2;
		}
		if (*str2 == 0)
			return (str);
		++str;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Hack the world now";
	to_find = "world";
	printf("Phrase is '%s' --- word to find is '%s')
	printf("--- and found --> '%s'", str, to_find, ft_strstr(str, to_find));
	return (0);
}
*/