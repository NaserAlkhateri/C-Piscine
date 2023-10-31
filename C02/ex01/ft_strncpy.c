/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:57:23 by myname          #+#    #+#             */
/*   Updated: 2023/07/19 22:23:14 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		is_copied;
	unsigned int		i;

	i = 0;
	is_copied = 0;
	while (i < n)
	{
		if (is_copied == 1)
			dest[i] = '\0';
		else if (src[i] == '\0')
		{
			is_copied = 1;
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
