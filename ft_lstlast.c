#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
		lst = lst->next;
	return (lst);
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

	a = 20;
	node1 = ft_lstnew(&a);
	b = 30;
	node2 = ft_lstnew(&b);
	c = 40;
	node3 = ft_lstnew(&c);
	node1->next = node2;
	node2->next = node3;
	last_node = ft_lstnew(&a);
	last_node = ft_lstlast(node1);
	printf("valeur dernier noeud : %d\n", *(int *)last_node->content);
	free(node1);
	free(node2);
	free(node3);
	free(last_node);
	return (0);
}
*/