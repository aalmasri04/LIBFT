/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:43:47 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 18:58:25 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "ABC";
	char	b[] = "ABD";
	char	c[] = "ABC";
	unsigned char	x[] = {0, 255, 10};
	unsigned char	y[] = {0, 1, 10};

	printf("Test 1 (equal): %d\n", ft_memcmp(a, c, 3));
	printf("Test 2 (smaller): %d\n", ft_memcmp(a, b, 3));
	printf("Test 3 (greater): %d\n", ft_memcmp(b, a, 3));
	printf("Test 4 (n = 2): %d\n", ft_memcmp(a, b, 2));
	printf("Test 5 (n = 0): %d\n", ft_memcmp(a, b, 0));
	printf("Test 6 (unsigned): %d\n", ft_memcmp(x, y, 3));
	printf("Test 7 (same pointer): %d\n", ft_memcmp(a, a, 3));
	printf("Test 8 (null byte): %d\n",
		ft_memcmp("A\0B", "A\0C", 3));

	printf("\nComparison with original memcmp:\n");
	printf("Your result: %d\n", ft_memcmp(a, b, 3));
	printf("Original:    %d\n", memcmp(a, b, 3));

	return (0);
}*/
