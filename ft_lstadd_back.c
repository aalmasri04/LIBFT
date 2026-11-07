/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:50:35 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 13:56:25 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    t_list *head = NULL;
    t_list *first = ft_lstnew(&a);
    t_list *second = ft_lstnew(&b);
    t_list *third = ft_lstnew(&c);

    if (!first || !second || !third)
    {
        free(first);
        free(second);
        free(third);
        return (1);
    }

    // Test 1: Empty list
    ft_lstadd_back(&head, first);
    printf("Test 1: %d\n", *(int *)head->content);

    // Test 2: Add to a list with one node
    ft_lstadd_back(&head, second);
    printf("Test 2: %d\n", *(int *)head->next->content);

    // Test 3: Add to a list with two nodes
    ft_lstadd_back(&head, third);
    printf("Test 3: %d\n", *(int *)head->next->next->content);

    free(third);
    free(second);
    free(first);
    return (0);
}*/
