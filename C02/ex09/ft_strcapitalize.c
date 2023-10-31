/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:24:19 by myname          #+#    #+#             */
/*   Updated: 2023/07/20 11:01:51 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_alphadigit(char c)
{
	if (c < 48 || c > 122)
		return (0);
	else if (c > 90 && c < 97)
		return (0);
	else if (c > 47 && c < 58)
		return (1);
	else if (c > 57 && c < 65)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		isletter;

	isletter = 0;
	i = 0;
	if (*str == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (isletter == 0 && (str[i] > 96 && str[i] < 123))
			str[i] -= 32;
		else if ((isletter == 1) && (str[i] > 64 && str[i] < 91))
			str[i] += 32;
		isletter = ft_c_is_alphadigit(str[i]);
		i++;
	}
	return (str);
}
