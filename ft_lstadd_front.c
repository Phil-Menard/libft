#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

int main(void)
{
	t_list  *head;
	int     a;

	a = 20;
	head = ft_lstnew(&a);
	printf("valeur de content : %d\n", *(int *)head->content);
	printf("adresse de next : %p\n", (void *)head->next);


	return (0);
}
*/