/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:48:34 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/06/29 17:25:53 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*s;

	s = dest;
	while (*s)
		s++;
	while (*src)
		*s++ = *src++;
	*s = '\0';
	return (dest);
}
