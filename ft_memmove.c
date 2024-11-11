/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:07:50 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/11 11:33:39 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (dest == NULL && src == NULL)
		return (NULL);
	s = (const char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	ft_memmove(NULL, NULL, 20);
	printf("\n---------\n");
	return (0);
}
*/