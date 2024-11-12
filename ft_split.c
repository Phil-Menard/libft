/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <pmenard@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:36:53 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/12 16:22:46 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		if (s[i] != c)
			nb_words++;
		while (s[i] != c && s[i + 1] != '\0')
			i++;
		i++;
	}
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		start_word;

	i = 0;
	j = 0;
	start_word = 0;
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			start_word = i;
		while (s[i] != c && s[i])
			i++;
		ptr[j++] = ft_substr(s, start_word, i - start_word);
		i++;
	}
	ptr[count_words(s, c)] = 0;
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	str[] = "      split       this for   me  !       ";
	char	**ptr;
	int		i;
	printf("%d\n", count_words(str, ' '));
	ptr = ft_split(str, ' ');
	i = 0;
	while (i < count_words(str, ' ') + 1)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
*/