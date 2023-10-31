/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:54:17 by myname          #+#    #+#             */
/*   Updated: 2023/07/12 10:26:35 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	alphabet;

	alphabet = 'z';
	i = 26;
	while (i > 0)
	{
		write(1, &alphabet, 1);
		alphabet--;
		i--;
	}
}
