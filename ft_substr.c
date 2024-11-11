/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:23:12 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/11 16:14:00 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	size_left;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	size_left = s_len - start;
	while (len > 0 && size_left > 0)
	{
		ptr[i++] = s[start++];
		size_left--;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	char const	s[] = "\0voila\t une longue phrase";
	char		*ptr;

	ptr = ft_substr(s, 0, 30);
	if (ptr)
		printf("%s\n", ptr);
	else
		printf("Empty string!");
	//printf("%ld\n", ft_strlen(ptr));
	free(ptr);
	return (0);
}
*/