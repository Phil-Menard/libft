#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
int main(void)
{
	t_list  *node;
	int     a;

	a = 5;
	node = ft_lstnew(&a);
	printf("valeur de content : %d\n", *(int *)node->content);
	printf("adresse de next : %p\n", (void *)node->next);
	return (0);
}
*/