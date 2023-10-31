/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:19:17 by myname          #+#    #+#             */
/*   Updated: 2023/07/16 12:46:54 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printdigits(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
}

void	ft_print_comb(void)
{
	char		i;
	char		j;
	char		y;

	i = '0';
	j = '1';
	y = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (y <= '9')
			{
				printdigits(i, j, y);
				if (i == '7')
					break ;
				write(1, ", ", 2);
				y++;
			}
			j++;
			y = j + 1;
		}
		j = i + 1;
		i++;
	}
}
