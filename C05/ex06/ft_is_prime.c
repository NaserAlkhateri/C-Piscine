/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:24:01 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 22:06:47 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb == 2)
		return (1);
	else if (nb < 2)
		return (0);
	div = nb / 2;
	while (div > 2)
	{
		if (nb % div == 0)
			return (0);
		div--; 
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_is_prime(10));
// }