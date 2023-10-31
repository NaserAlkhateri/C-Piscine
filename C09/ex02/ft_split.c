/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myname <myname@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:48:40 by myname          #+#    #+#             */
/*   Updated: 2023/08/02 19:39:30 by myname         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep_c(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_str(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_sep_c(str[i], sep) == 0 
			&& (is_sep_c(str[i + 1], sep) == 1 || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*add_word(int pos, char *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		word[i] = str[pos];
		i++;
		pos++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		w;
	char	**splitted;
	int		words;
	int		i;
	int		j;

	w = 0;
	i = 0;
	j = 0;
	words = count_str(str, charset);
	splitted = malloc((words + 1) * sizeof(char *));
	while (w < words)
	{
		while (is_sep_c(str[i], charset) == 1 && str[i] != '\0')
			i++;
		while (is_sep_c(str[i], charset) == 0 && str[i] != '\0')
		{
			i++;
			j++;
		}
		splitted[w++] = add_word(i - j, str, j);
		j = 0;
	}
	splitted[w] = NULL;
	return (splitted);
}

// #include <stdio.h>

// int main()
// {
// 	int i = 0;
// 	char **tmp;
// 	char *to_split = "+";
// 	tmp = ft_split(to_split, " +,");
// 	while(tmp[i] != NULL)
// 	{
// 		printf("%s\n", tmp[i]);
// 		i++;
// 	}
// 	//printf("\n");
// 	free(tmp);
// }
