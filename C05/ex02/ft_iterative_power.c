/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:59:21 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 22:07:03 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n",ft_iterative_power(0,0));
// 	printf("%d\n",ft_iterative_power(-2,1));
// 	printf("%d\n",ft_iterative_power(2,8));
// }