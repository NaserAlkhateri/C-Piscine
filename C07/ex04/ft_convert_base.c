/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:52:59 by myname          #+#    #+#             */
/*   Updated: 2023/07/31 17:09:29 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr(long int nbr, int base, char *tmp_arr, int length);
int		is_proper_base(char *str);
int		ft_strlen(char *str);

int	get_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == 32 || (c >= 9 && c <= 13) || c == '\0')
			return (-1);
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_result(int i, char *str, char *base, int base_len)
{
	int			j;
	long int	result;
	int			sign;

	sign = 1;
	result = 0;
	j = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		j = get_index(base, str[i]);
		if (j == -1)
			return (result);
		result *= base_len;
		result += (sign * j);
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	long int	result;
	int			base_len;

	base_len = ft_strlen(base);
	if (is_proper_base(base) == 0)
		return (0);
	i = 0;
	result = 0;
	result = get_result(i, str, base, base_len);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int		nb;
	unsigned int	base_len;
	unsigned int	nb_pos;
	int				counter;
	unsigned int	tmp;

	counter = 0;
	if (is_proper_base(base_to) == 0 || is_proper_base(base_from) == 0)
		return (NULL);
	base_len = ft_strlen(base_to);
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
		nb_pos = (-1 * nb);
	else
		nb_pos = nb;
	tmp = nb_pos;
	while (tmp >= base_len)
	{
		tmp /= base_len;
		counter++;
	}
	if (nb < 0)
		base_len = -base_len;
	return (ft_putnbr(nb_pos, base_len, base_to, counter + 1));
}

// #include <stdio.h>
// int main()
// {
// 	char *tmp;
// 	tmp = ft_convert_base("11", "10", "10");
// 	printf("%s\n", tmp);
// 	free(tmp);
// 	return 0;
// }

// -2147483648
// -10000000000000000000000000000000
// 2147483647
// 1111111111111111111111111111111
// 0123456789abcdef