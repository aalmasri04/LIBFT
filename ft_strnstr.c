/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:33:52 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/28 17:55:45 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && little[j] != '\0')
		{
			if (big[i + j] == '\0' || big[i + j] != little[j])
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*void	test(const char *big, const char *little, size_t len, int n)
{
	char	*result;

	result = ft_strnstr(big, little, len);
	if (result)
		printf("Test %d: [%s]\n", n, result);
	else
		printf("Test %d: NULL\n", n);
}

int	main(void)
{
	test("Hello World", "World", 11, 1);
	test("Hello World", "World", 8, 2);
	test("I love cats", "cat", 11, 3);
	test("caxcat", "cat", 6, 4);
	test("HELLO", "", 5, 5);
	test("HELLO", "XYZ", 5, 6);
	test("ABC", "ABC", 3, 7);
	test("ABC", "ABC", 2, 8);
	test("ABC", "A", 0, 9);
	test("", "A", 5, 10);
	test("", "", 0, 11);
	test("aaaaab", "aab", 6, 12);
	return (0);
}*/