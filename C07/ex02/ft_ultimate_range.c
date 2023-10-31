/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:27:25 by myname          #+#    #+#             */
/*   Updated: 2023/07/31 15:50:28 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * 4);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int	*ptr = NULL;
// 	int size = ft_ultimate_range(&ptr, -5, 10);
// 	while (i < size){
// 		printf("%d, ", *ptr + i);
// 		i++;
// 	}
// 	printf("\n%d\n ", size);
// 	free(ptr);
// 	return 0;
// }