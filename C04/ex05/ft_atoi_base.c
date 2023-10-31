/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:25:35 by myname          #+#    #+#             */
/*   Updated: 2023/07/30 15:29:23 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_result(int i, char *str, char *base, int base_len)
{
	int	j;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	j = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		j = get_index(base, str[i]);
		if (j == -1)
			break ;
		result *= base_len;
		result += (sign * j);
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		result;
	int		base_len;

	base_len = ft_strlen(base);
	if (is_proper_base(base) == 0)
		return (0);
	i = 0;
	result = 0;
	while (str[i] <= 32)
		i++;
	result = get_result(i, str, base, base_len);
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n",ft_atoi_base("1111111111111111111111111111111","01"));
// 	return 0;
// }