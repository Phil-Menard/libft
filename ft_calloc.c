/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:19:56 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/07 11:21:04 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (result == NULL)
	{
		printf("Erreur");
		result = malloc(0);
		return (result);
	}
	ft_memset(result, 0, size);
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*str;
	int		i;

	str = ft_calloc(10, sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("%d\n", str[i]);
		i++;
	}
	free(str);
	return 0;
}
*/