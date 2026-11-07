/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 10:18:47 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 12:48:45 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*int main(void)
{
    int a;
    int b;
    t_list *lst_a;
    t_list *lst_b;

    b = 10;
    a = 20;
    
    lst_a = ft_lstnew(&a);
    lst_b = ft_lstnew(&b);
    ft_lstadd_back(&lst_a,lst_b);
    printf("%d\n",ft_lstsize(lst_a));
    printf("%d\n",ft_lstsize(NULL));
    free(lst_a->next);
    free(lst_a);
    return(0);
}*/