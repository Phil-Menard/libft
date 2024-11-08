/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:07:50 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/05 11:59:23 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	char	temp[500];
	int		i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	while (*s)
	{
		temp[i] = *s;
		s++;
		i++;
	}
	i = 0;
	while (n > 0)
	{
		*d = temp[i];
		d++;
		i++;
		n--;
	}
	return (dest);
}
