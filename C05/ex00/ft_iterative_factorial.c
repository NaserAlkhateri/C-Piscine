/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:23:38 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 22:07:24 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	result = nb;
	while (nb > 1)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n",ft_iterative_factorial(0));
// 	printf("%d\n",ft_iterative_factorial(1));
// 	printf("%d\n",ft_iterative_factorial(4));
// }