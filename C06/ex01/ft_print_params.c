/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 01:01:28 by myname          #+#    #+#             */
/*   Updated: 2023/07/25 01:10:03 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (s < argc)
	{
		while (argv[s][i] != '\0')
		{
			write(1, &argv[s][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		s++;
	}
	return (0);
}