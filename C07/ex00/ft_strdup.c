/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:20:53 by myname          #+#    #+#             */
/*   Updated: 2023/07/27 18:33:07 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char testing[] = "hellow world!";
// 	char *str = strdup(testing);
// 	printf("%s\n", str);
// 	free(str);
// }