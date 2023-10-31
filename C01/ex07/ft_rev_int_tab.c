/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:16:17 by myname          #+#    #+#             */
/*   Updated: 2023/07/15 11:40:12 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			ft_swap(tab + j, tab + (j + 1));
			j++;
		}
		i++;
	}
}
