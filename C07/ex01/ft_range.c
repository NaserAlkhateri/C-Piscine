/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:07:35 by myname          #+#    #+#             */
/*   Updated: 2023/07/27 18:33:01 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * 4);
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	int	*ptr = ft_range(-5,5);
// 	while(i < 10){
// 		printf("%d ", ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return 0;
// }