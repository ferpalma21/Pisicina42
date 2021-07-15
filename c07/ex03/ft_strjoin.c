/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:38:06 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/15 16:14:26 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
/* 
int	main(void)
{
	char	*text[42];
	char	*symbol;

	symbol = "++";
	text[0] = "Try";
	text[1] = "to";
	text[2] = "hack";
	text[3] = "the";
	text[4] = "world";
	text[5] = "everyday";
	text[6] = "and";
	text[7] = "the";
	text[8] = "world";
	text[9] = "will";
	text[10] = "be";
	text[11] = "a";
	text[12] = "better";
	text[13] = "place";
	text[14] = "place";
	text[15] = "place";
	text[16] = "place";
	text[17] = "place";
	text[18] = "place";
	text[19] = "place";
	text[20] = "place";
	text[21] = "place";
	text[22] = "place";
	text[23] = "place";
	text[24] = "place";
	text[25] = "place";
	text[26] = "place";
	text[27] = "place";
	text[28] = "place";
	text[29] = "place";
	text[30] = "place";
	text[31] = "place";
	text[32] = "place";
	text[33] = "place";
	text[34] = "place";
	text[35] = "place";
	text[36] = "place";
	text[37] = "place";
	text[38] = "place";
	text[39] = "place";
	text[40] = "place";
	text[41] = "place\n";
	int i = 0;
	while (i < 150)
	{
		printf("%s --> i: %d\n", ft_strjoin(42, text, symbol), i);
		i++;
	}
	return (0);
}
 */