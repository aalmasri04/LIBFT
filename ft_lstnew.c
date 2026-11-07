/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:58:33 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 11:43:24 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int main(void)
{
    int num;
    num = 10;
    t_list *node;
    //node = ft_lstnew(&num);
    node = ft_lstnew(NULL);
    if(!node)
        return(1);
    if (node->content == NULL)
    printf("Content is NULL\n");
    //printf("%d\n",*(int *)node->content);
    free(node);
    return(0);
}*/