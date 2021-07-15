/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:19:18 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/08 21:44:26 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main () 
{
    char str1[15];
    char str2[15];
    int ret;
    char str3[15];
    char str4[15];
    int ret1;
    printf("Real Function\n");
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    ret = strncmp(str1, str2, 4);
    if(ret < 0)
    {
        printf("str1 is less than str2\n");
    } 
    else if(ret > 0)
    {
        printf("str2 is less than str1\n");
    } 
    else
    {
        printf("str1 is equal to str2\n");
    }
    printf("-------------\n");
    printf("Own Function\n");
    strcpy(str3, "abcdef");
    strcpy(str4, "ABCDEF");
    ret1 = ft_strncmp(str3, str4, 4);
    if(ret1 < 0)
    {
        printf("str1 is less than str2\n");
    } 
    else if(ret1 > 0)
    {
        printf("str2 is less than str1\n");
    } 
    else
    {
        printf("str1 is equal to str2\n");
    }
    return(0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*s1 - *s2);
	else
		return (0);
}
