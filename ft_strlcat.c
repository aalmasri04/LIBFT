/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:21:12 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:10:28 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s;
	size_t	d;

	s = ft_strlen(src);
	d = 0;
	while (d < size && dest[d] != '\0')
		d++;
	if (size == d)
		return (size + s);
	i = 0;
	while (src[i] != '\0' && d + i < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

/*int	main(void)
{
	char	d1[20] = "Hi";
	char	d2[6] = "Hi";
	char	d3[10] = "HELLO";
	char	d4[10] = "HELLO";
	char	d5[10] = "";
	char	d6[10] = "ABC";
	char	d7[6] = "HELLO";
	char	d8[10] = "ABC";
	char	d9[10] = "";
	char	d10[10] = "ABC";
	char	d11[5] = {'A', 'B', 'C', 'D', 'E'};
	char	d12[8] = "Hi";
	size_t	r;

	r = ft_strlcat(d1, "World", sizeof(d1));
	printf("Test 1 (enough space): [%s], return: %zu\n", d1, r);

	r = ft_strlcat(d2, "World", sizeof(d2));
	printf("Test 2 (truncation): [%s], return: %zu\n", d2, r);

	r = ft_strlcat(d3, "ABC", 3);
	printf("Test 3 (size smaller than dst): [%s], return: %zu\n", d3, r);

	r = ft_strlcat(d4, "ABC", 0);
	printf("Test 4 (size = 0): [%s], return: %zu\n", d4, r);

	r = ft_strlcat(d5, "HELLO", sizeof(d5));
	printf("Test 5 (empty destination): [%s], return: %zu\n", d5, r);

	r = ft_strlcat(d6, "", sizeof(d6));
	printf("Test 6 (empty source): [%s], return: %zu\n", d6, r);

	r = ft_strlcat(d7, "ABC", sizeof(d7));
	printf("Test 7 (full destination): [%s], return: %zu\n", d7, r);

	r = ft_strlcat(d8, "XYZ", 1);
	printf("Test 8 (size = 1): [%s], return: %zu\n", d8, r);

	r = ft_strlcat(d9, "", sizeof(d9));
	printf("Test 9 (both empty): [%s], return: %zu\n", d9, r);

	r = ft_strlcat(d10, "XYZ", 7);
	printf("Test 10 (exact fit): [%s], return: %zu\n", d10, r);

	r = ft_strlcat(d11, "XYZ", sizeof(d11));
	printf("Test 11 (no null terminator): return: %zu, "
		"first byte: %c\n", r, d11[0]);

	r = ft_strlcat(d12, "World", sizeof(d12));
	printf("Test 12 (exact fit): [%s], return: %zu\n", d12, r);

	return (0);
}*/