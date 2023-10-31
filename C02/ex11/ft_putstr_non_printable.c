/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:41:32 by myname          #+#    #+#             */
/*   Updated: 2023/07/19 23:10:33 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	createtable(char *table)
{
	char	c;
	int		i;

	i = 0;
	c = 48;
	while (i < 10)
	{
		table[i] = c;
		c++;
		i++;
	}
	c = 97;
	while (i < 17)
	{
		table[i] = c;
		c++;
		i++;
	}
}

void	printhex(char c)
{
	char	first;
	char	second;
	char	table[17];

	createtable(table);
	if (c <= 16)
		first = '0';
	else if (c == 127)
		first = '7';
	else
		first = '1';
	second = table[c % 16];
	if (c == 127)
		second = 'f';
	write(1, "\\", 1);
	write(1, &first, 1);
	write(1, &second, 1);
}

int	ft_str_is_printable(char c)
{
	if (c == '\0')
		return (1);
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	isprintable;

	isprintable = 0;
	i = 0;
	while (str[i] != '\0')
	{
		isprintable = ft_str_is_printable(str[i]);
		if (isprintable == 1)
			write(1, &str[i], 1);
		else
			printhex(str[i]);
		i++;
	}
}
