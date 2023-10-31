/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:49:17 by myname          #+#    #+#             */
/*   Updated: 2023/07/30 15:30:38 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
				|| str[j] == '-' || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	base_index_print(int nb, int base_len, char *str)
{
	if (nb == -2147483648)
	{
		base_index_print(-1 * (nb / base_len), base_len, str);
		base_index_print(-1 * (nb % base_len), base_len, str);
	}
	else if (nb >= base_len)
	{
		base_index_print(nb / base_len, base_len, str);
		base_index_print(nb % base_len, base_len, str);
	}
	else
	{
		write(1, &str[nb], 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (is_proper_base(base) == 0 || base_len < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			base_index_print(nbr, base_len, base);
			return ;
		}
		nbr = -nbr;
	}
	base_len = ft_strlen(base);
	if (ft_strlen(base) <= 1)
		return ;
	base_index_print(nbr, base_len, base);
}

// int main()
// {
// 	ft_putnbr_base(-2147483648, "01");
// 	return 0;
// }