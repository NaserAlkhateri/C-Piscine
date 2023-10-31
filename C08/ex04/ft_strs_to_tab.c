/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:51:03 by myname          #+#    #+#             */
/*   Updated: 2023/08/01 19:38:23 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*duped;
	int		i;

	i = 0;
	size = ft_strlen(src);
	duped = malloc(size + 1);
	if (duped == NULL)
		return (0);
	while (src[i] != '\0')
	{
		duped[i] = src[i];
		i++;
	}
	duped[i] = '\0';
	return (duped);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	i = 0;
	ret = malloc((ac + 1) * sizeof(t_stock_str));
	if (!ret)
		return (NULL);
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		i++;
	}
	ret[i].size = 0;
	ret[i].str = 0;
	ret[i].copy = 0;
	return (ret);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	t_stock_str *ptr = ft_strs_to_tab(ac, av);
// 	int i = 0;
// 	while(i < ac)
// 	{
// 		printf("size: %d word: %s dup: %s\n", 
//	ptr[i].size, ptr[i].str, ptr[i].copy);
// 		i++;
// 	}
// 	return 0;
// }