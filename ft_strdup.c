/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:59:41 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:07:38 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*void	test(const char *s)
{
	char	*copy;

	copy = ft_strdup(s);
	if (copy == NULL)
	{
		printf("FAIL: malloc returned NULL\n");
		return ;
	}
	if (strcmp(s, copy) == 0 && s != copy)
		printf("PASS: \"%s\"\n", copy);
	else
		printf("FAIL: \"%s\"\n", s);
	free(copy);
}

int	main(void)
{
	test("Hello");
	test("");
	test("42 Abu Dhabi");
	test("a");
	test("Hello World!");
	test("123456789");
	return (0);
}*/