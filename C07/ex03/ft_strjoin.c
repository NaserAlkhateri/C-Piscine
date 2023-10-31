/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:20:31 by myname          #+#    #+#             */
/*   Updated: 2023/08/02 23:28:06 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		i;
	int		j;
	int		c;

	joined = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			joined[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			joined[c++] = sep[j++];
		i++;
	}
	joined[c] = '\0';
	return (joined);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	(void)argv;
// 	(void)argc;
// 	char *tmp[6] = {"asdfghjklk", "ertgyhjk", "sdfghjz"};
// 	char *ret = ft_strjoin(3, tmp, "0");
// 	printf("%s\n",ret);
// 	free(ret);
// 	return 0;
// }