/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:23:40 by myname          #+#    #+#             */
/*   Updated: 2023/07/12 11:17:52 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	alphabet;

	alphabet = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet, 1);
		alphabet++;
		i++;
	}
}
