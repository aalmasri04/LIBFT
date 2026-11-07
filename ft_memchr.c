/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:20:46 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 18:57:39 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cc == ss[i])
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

/* 
int	main(void)
{
	char	str[] = "HELLO";
	char	bytes[] = {'A', '\0', 'B', 'C', 'D'};
	void	*result;

	// Test 1: First character
	result = ft_memchr(str, 'H', 5);
	printf("Test 1: %ld\n", result ? (long)((char *)result - str) : -1L);

	// Test 2: Middle character
	result = ft_memchr(str, 'L', 5);
	printf("Test 2: %ld\n", result ? (long)((char *)result - str) : -1L);

	// Test 3: Last character
	result = ft_memchr(str, 'O', 5);
	printf("Test 3: %ld\n", result ? (long)((char *)result - str) : -1L);

	// Test 4: Character not found
	result = ft_memchr(str, 'Z', 5);
	printf("Test 4: %d\n", result == NULL);

	// Test 5: n = 0
	result = ft_memchr(str, 'H', 0);
	printf("Test 5: %d\n", result == NULL);

	// Test 6: Character exists, but outside n
	result = ft_memchr(str, 'O', 3);
	printf("Test 6: %d\n", result == NULL);

	// Test 7: Search for a null byte
	result = ft_memchr(bytes, '\0', 5);
	printf("Test 7: %ld\n", result ? (long)((char *)result - bytes) : -1L);

	// Test 8: Integer converted to unsigned char
	result = ft_memchr(str, 328, 5);
	printf("Test 8: %ld\n", result ? (long)((char *)result - str) : -1L);

	return (0);
}*/