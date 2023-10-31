/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:33:08 by myname          #+#    #+#             */
/*   Updated: 2023/07/16 15:54:12 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printzeros(int zeros)
{
	while (zeros > 0)
	{
		write(1, "0", 1);
		zeros--;
	}
}

void	numberchecker(int *nb, int *zeros, int *bool)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb *= -1;
	}
	else if (*nb == 0)
		*zeros = 1;
	if (*nb % 10 == 0)
		*bool = 1;
}

void	digitprinter(int num2)
{
	char	digit;
	int		num1;

	digit = 48;
	num1 = 0;
	while (num2 > 0)
	{
		num1 = num2 % 10;
		num2 /= 10;
		digit += num1;
		write(1, &digit, 1);
		digit = 48;
	}
}

void	ft_putnbr(int nb)
{
	int		num1;
	int		num2;
	char	digit;
	int		my_bool;
	int		zero_counter;

	num2 = 0;
	num1 = 0;
	my_bool = 0;
	zero_counter = 0;
	numberchecker(&nb, &zero_counter, &my_bool);
	digit = 48;
	while (nb != 0)
	{
		num1 = nb % 10;
		if (num1 == 0 && my_bool == 1)
			zero_counter++;
		num2 = num2 * 10 + num1;
		nb /= 10;
	}
	digitprinter(num2);
	printzeros(zero_counter);
}
