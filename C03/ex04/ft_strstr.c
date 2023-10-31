/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:02:54 by myname          #+#    #+#             */
/*   Updated: 2023/07/20 18:44:02 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		ismatch;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ismatch = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				ismatch = i + 1 - ismatch;
				return (&str[ismatch]);
			}
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
