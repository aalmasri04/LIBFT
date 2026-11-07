/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:34:27 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 14:44:00 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void add_five(void *content)
{
    int *num;

    num = (int *)content;
    *num = *num + 5;
}

int main(void)
{
    int a = 10;
    int b = 20;
    t_list *head;
    t_list *second;

    head = ft_lstnew(&a);
    second = ft_lstnew(&b);
    if (!head || !second)
    {
        free(head);
        free(second);
        return (1);
    }
    ft_lstadd_back(&head, second);

    // Test 1: Multiple nodes
    ft_lstiter(head, add_five);
    printf("Test 1: %d %d\n", a, b);

    // Test 2: Empty list
    ft_lstiter(NULL, add_five);
    printf("Test 2: No crash\n");

    // Test 3: NULL function
    ft_lstiter(head, NULL);
    printf("Test 3: %d %d\n", a, b);

    // Test 4: One node
    ft_lstiter(second, add_five);
    printf("Test 4: %d\n", b);

    free(second);
    free(head);
    return (0);
}*/