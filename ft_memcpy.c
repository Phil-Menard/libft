/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:02:02 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/11 11:15:08 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
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
	char	str[] = "t\0\0\0";
	char	dest[] = "";
	

	printf("Avant ft_memcpy : %s\n", dest);
	memcpy(dest, str, 2);
	printf("Apres ft_memcpy : %s\n", dest);
	printf("\n---------\n");
	return (0);
}
*/