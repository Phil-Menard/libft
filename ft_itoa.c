/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:12:41 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/08 12:53:48 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	len_int(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*reverse_str(char *str, int n, int sign)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	if (sign > 0)
	{
		result = malloc((len_int(n) + 2) * sizeof(char));
		result[j] = '-';
		j++;
	}
	else
		result = malloc((len_int(n) + 1) * sizeof(char));
	i = ft_strlen(str);
	while (i >= 0)
	{
		result[j] = str[i - 1];
		j++;
		i--;
	}
	result[j] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*result;
	int		sign;
	int		i;

	ptr = malloc((len_int(n) + 1) * sizeof(char));
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	i = 0;
	while (n > 9)
	{
		ptr[i] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	ptr[i] = '0' + n;
	i++;
	ptr[i] = '\0';
	result = reverse_str(ptr, n, sign);
	free(ptr);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-0));
	return (0);
}
*/