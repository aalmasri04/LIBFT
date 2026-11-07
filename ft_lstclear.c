/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:21:15 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 14:34:14 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

/*int main(void)
{
    t_list *head;
    t_list *second;
    int *a;
    int *b;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    if (!a || !b)
    {
        free(a);
        free(b);
        return (1);
    }
    *a = 10;
    *b = 20;

    head = ft_lstnew(a);
    second = ft_lstnew(b);
    if (!head || !second)
    {
        free(a);
        free(b);
        free(head);
        free(second);
        return (1);
    }

    // Test 1: Two nodes
    ft_lstadd_back(&head, second);
    ft_lstclear(&head, free);
    printf("Test 1: %p\n", (void *)head);

    // Test 2: Empty list
    ft_lstclear(&head, free);
    printf("Test 2: %p\n", (void *)head);

    return (0);
}*/