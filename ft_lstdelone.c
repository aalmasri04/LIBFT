/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:05:00 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 14:19:35 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*int main(void)
{
    int *a;
    t_list *node;
    

    a = malloc(sizeof(int));
     if (!a)
        return (1);
    *a = 10;
    node = ft_lstnew(a);
    if (node == NULL)
    {
        free(a);
        return (1);
    }
    ft_lstdelone(node , free);
    return(0);
}*/