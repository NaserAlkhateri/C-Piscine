/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:53:02 by myname          #+#    #+#             */
/*   Updated: 2023/07/31 17:08:37 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	is_proper_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[j] == '+' 
				|| str[j] == '-' || str[i] == '+' || str[i] == '-'
				|| str[j] == 32 || (str[j] >= 9 && str[j] <= 13)
				|| str[i] == '+' || str[i] == '-' 
				|| (str[i] >= 9 && str[i] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_iterative_power(long int nb, long int power)
{
	long int	i;
	long int	result;

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

char	*ft_putnbr(unsigned int nbr, int base, char *base_arr, int length)
{
	int		counter;
	int		index;
	char	*ret_str;
	int		i;

	i = 0;
	counter = length - 1;
	if (base < 0)
	{
		base = -base;
		ret_str = malloc((length + 2) * sizeof(char));
		ret_str[i++] = '-';
	}
	else
		ret_str = malloc((length + 1) * sizeof(char));
	while (length > 0)
	{
		index = nbr / ft_iterative_power(base, counter);
		nbr -= (index * (ft_iterative_power(base, counter)));
		ret_str[i++] = base_arr[index];
		counter--;
		length--;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
