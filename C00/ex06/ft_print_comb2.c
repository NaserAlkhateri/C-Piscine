/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:22:31 by myname          #+#    #+#             */
/*   Updated: 2023/07/12 18:30:24 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printdigits(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
	if (d1 == '9' && d4 == '9' && d2 == '8' && d3 == '9')
		return ;
	write(1, ", ", 2);
}

void	startcount(char d1, char d2, char d3, char d4)
{
	while (d3 <= '9')
	{
		while (d4 <= '9')
		{
			printdigits(d1, d2, d3, d4);
			d4++;
		}
		d4 = '0';
		d3++;
	}
}

void	ft_print_comb2(void)
{
	char		i;
	char		j;
	char		y;
	char		z;

	i = '0';
	j = '0';
	y = '0';
	z = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			z = j + 1;
			if (j == '9')
			{
				z = '0';
				y++;
			}
			startcount(i, j, y, z);
			j++;
		}
		j = '0';
		i++;
	}
}
