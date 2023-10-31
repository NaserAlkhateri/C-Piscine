/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:01:17 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 22:06:51 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb < 3)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(){
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(81));
// }