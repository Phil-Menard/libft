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

char	*isostr(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	int		i;
	int		n;

	str = isostr(s, c);
	n = count_words(str, c);
	ptr = ft_calloc(n, sizeof(char));
	i = 0;
	while (n > 0)
	{
		while (ft_strchr(s, c) != NULL)
			ptr[i] = 
		n--;
	}
	return (str);
}
