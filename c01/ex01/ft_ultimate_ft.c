/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalma-l <dpalma-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:51:00 by dpalma-l          #+#    #+#             */
/*   Updated: 2021/07/05 19:42:49 by dpalma-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int *a;
	int **ab;
	int ***abc;
	int ****abcd;
	int *****abcde;
	int ******abcdef;
	int *******abcdefg;
	int ********abcdefgh;
	int *********abcdefghi;

	*a = 9;
	ab = &a;
	abc = &ab;
	abcd = &abc;
	abcde = &abcd;
	abcdef = &abcde;
	abcdefg = &abcdef;
	abcdefgh = &abcdefg;
	abcdefghi = &abcdefgh;
	ft_ultimate_ft(abcdefghi);
}