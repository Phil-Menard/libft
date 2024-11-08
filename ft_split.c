/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:53 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/08 12:27:31 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*isolstr(char const *s, char c)
{
	char	*str;
	int		i;

	while (*s == c)
	{
		s++;
	}
	i = ft_strlen(s);
	while (s[i - 1] == c)
	{
		i--;
	}
	str = ft_substr(s, 0, i + 1);
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
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	int		i;
	int		j;
	int		nb_words;

	str = isolstr(s, c);
	nb_words = count_words(str, c);
	ptr = malloc((nb_words + 1) * sizeof(char *));
	i = 0;
	while (i < nb_words)
	{
		ptr[i] = malloc((wordlen(str, c) + 1) * sizeof(char));
		j = 0;
		while (*str != c && *str)
			ptr[i][j++] = *str++;
		ptr[i][j] = '\0';
		while (*str == c)
			str++;
		i++;
	}
	free(str);
	ptr[i] = NULL;
	return (ptr);
}

/*
int	main(void)
{
	const char	str[] = "     voi   la une phrase banale      ";
	char	**ptr;
	int		i;

	ptr = ft_split(str, ' ');
	i = 0;
	while (i < 4)
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
*/