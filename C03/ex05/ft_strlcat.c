/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:41:29 by myname          #+#    #+#             */
/*   Updated: 2023/07/20 14:34:10 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	countdest(unsigned int *i, unsigned int *size_i,
char *dst, unsigned int size)
{
	unsigned int	j;

	*i = 0;
	while (dst[*i] != '\0' && *size_i != 0)
	{
		*size_i = *size_i - 1;
		*i = *i + 1;
	}
	j = &dst[*i] - &dst[0];
	*size_i = size - j;
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		count_dst;
	unsigned int		size_c;

	size_c = size;
	i = 0;
	count_dst = 0;
	j = countdest(&count_dst, &size_c, &dest[0], size);
	if (size_c == 0)
		return (ft_strlen(src) + j);
	while (src[i] != '\0')
	{
		if (size_c > 1)
		{
			size_c--;
			dest[count_dst] = src[i];
			count_dst++;
		}
		i++;
	}
	dest[count_dst] = '\0';
	return (j + (&src[i] - src));
}
