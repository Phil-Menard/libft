/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <pmenard@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:03:35 by pmenard           #+#    #+#             */
/*   Updated: 2024/11/15 13:28:23 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst != NULL)
		new = *lst->next;
	new = *lst;
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;
	int		a;
	int		b;
	int		c;
	int		d;

	a = 20;
	node1 = ft_lstnew(&a);
	b = 30;
	node2 = ft_lstnew(&b);
	c = 40;
	node3 = ft_lstnew(&c);
	d = 50;
	last_node = ft_lstnew(&d);
	node1->next = node2;
	node2->next = node3;
	ft_lstadd_back(&node1, last_node);
	printf("adresse dernier noeud : %p\n", last_node);
	printf("adresse pointe par avant dernier noeud : %p\n", node3->next);
	return (0);
}
*/