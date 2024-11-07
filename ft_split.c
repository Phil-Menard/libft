/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:53 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/07 17:34:57 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*isolstr(char const *s, char c)
{
	char	*str;
	int		i;

	while (*s == c)
	{
		printf("first : %s\n", s);
		s++;
	}
	i = ft_strlen(s);
	printf("%d\n", i);
	while (s[i - 1] == c)
	{
		printf("second : %s\n", s);
		i--;
	}
	str = ft_substr(s, 0, i);
	return (str);
}

int	count_words(char *str, char c)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 1;
	while (str[i])
	{
		if (str[i] == c && str[i - 1] != c)
			nb_words++;
		i++;
	}
	return (nb_words);
}

int	wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	int		cols;
	int		rows;

	ptr = ft_calloc(count_words(str, c), sizeof(char));
	str = isolstr(s, c);
	rows = 0;
	//voila une phrase banale//
	while (rows < count_words(str, c))
	{
		cols = 0;
		while (*str != c)
		{
			ptr[rows][cols] = *str;
			cols++;
			str++;
		}
		while (*str == c)
			str++;
		rows++;
	}
	return (ptr);
}

int	main(void)
{
	char	str2[] = " voila une phrase banale ";
	char	*str;
	char	**ptr;
	int		n;
	int		i;

	ptr = ft_split(str2, ' ');
	str = isolstr(s, c);
	n = count_words(str, c);
	i = 0;
	while (i < n)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	free(ptr);
	free(str);
	return (0);
}