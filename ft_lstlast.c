/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:19:21 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 13:11:06 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int main(void)
{
    t_list *head;
    t_list *second;
    t_list *third;
    t_list *last;
    int a = 10;
    int b = 20;
    int c = 30;

    \
    printf("Test 1: Multiple nodes\n");
    head = ft_lstnew(&a);
    second = ft_lstnew(&b);
    third = ft_lstnew(&c);
    if (!head || !second || !third)
    {
        free(head);
        free(second);
        free(third);
        return (1);
    }
    ft_lstadd_back(&head, second);
    ft_lstadd_back(&head, third);
    last = ft_lstlast(head);
    printf("%d\n", *(int *)last->content);
    free(third);
    free(second);
    free(head);

    // Test 2: Empty list
    printf("Test 2: Empty list\n");
    last = ft_lstlast(NULL);
    printf("%p\n", (void *)last);

    // Test 3: One node
    printf("Test 3: One node\n");
    head = ft_lstnew(&a);
    if (!head)
        return (1);
    last = ft_lstlast(head);
    printf("%d\n", *(int *)last->content);
    free(head);

    return (0);
}*/