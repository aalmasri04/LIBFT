/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:53:25 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/25 15:04:11 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !del || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_node);
	}
	return (new_list);
}

/*void	*double_num(void *content)
{
	int	*result;

	result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = *(int *)content * 2;
	return (result);
}

int	main(void)
{
	int		a = 10;
	int		b = 20;
	t_list	*head;
	t_list	*second;
	t_list	*new_list;

	head = ft_lstnew(&a);
	second = ft_lstnew(&b);
	if (!head || !second)
	{
		free(head);
		free(second);
		return (1);
	}
	ft_lstadd_back(&head, second);

	// Test 1: Two nodes
	new_list = ft_lstmap(head, double_num, free);
	if (!new_list)
	{
		free(second);
		free(head);
		return (1);
	}
	printf("Original: %d %d\n", a, b);
	printf("New: %d %d\n",
		*(int *)new_list->content,
		*(int *)new_list->next->content);

	ft_lstclear(&new_list, free);
	free(second);
	free(head);

	// Test 2: Empty list
	new_list = ft_lstmap(NULL, double_num, free);
	printf("Empty list: %p\n", (void *)new_list);

	// Test 3: NULL function
	new_list = ft_lstmap(NULL, NULL, free);
	printf("NULL function: %p\n", (void *)new_list);

	return (0);
}*/