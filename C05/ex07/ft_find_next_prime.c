/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:54:28 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 22:06:43 by myname         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	max;

	max = 2147483645 + 2;
	while (nb <= max)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_find_next_prime(12));
// 	return (0);
// }
