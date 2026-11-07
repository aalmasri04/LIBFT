/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 10:09:15 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 12:26:48 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main()
{
    int a;
    int b;
    t_list *head;
    t_list *new;
    
    a = 20;
    b = 10;
    
    //head = ft_lstnew(&a);
    head = NULL;
    new = ft_lstnew(&b);
    ft_lstadd_front(&head,new);
    printf("%d\n",*(int *)head->content);
    //printf("%d\n", *(int *)head->next->content);
    //free(head->next);
    free(new);
    return(0);
}*/