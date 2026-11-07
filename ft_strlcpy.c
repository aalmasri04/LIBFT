/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:31:43 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:11:08 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	d1[20] = "xxxxxxxxxx";
	char	d2[5] = "xxxx";
	char	d3[1] = {'X'};
	char	d4[5] = "xxxx";
	char	d5[10] = "xxxxxxxxx";
	char	d6[6] = "xxxxx";
	char	d7[4] = "xxx";
	char	d8[10] = "xxxxxxxxx";
	char	d9[10] = "xxxxxxxxx";
	char	d10[10] = "xxxxxxxxx";
	char	d11[3] = {'X', 'Y', 'Z'};
	char	d12[10] = "xxxxxxxxx";
	size_t	r;

	r = ft_strlcpy(d1, "HELLO", sizeof(d1));
	printf("Test 1 (enough space): [%s], return: %zu\n", d1, r);

	r = ft_strlcpy(d2, "HELLOWORLD", sizeof(d2));
	printf("Test 2 (truncation): [%s], return: %zu\n", d2, r);

	r = ft_strlcpy(d3, "HELLO", sizeof(d3));
	printf("Test 3 (size = 1): byte = %d, return: %zu\n",
		(unsigned char)d3[0], r);

	r = ft_strlcpy(d4, "HELLO", 0);
	printf("Test 4 (size = 0): [%s], return: %zu\n", d4, r);

	r = ft_strlcpy(d5, "", sizeof(d5));
	printf("Test 5 (empty source): [%s], return: %zu\n", d5, r);

	r = ft_strlcpy(d6, "HELLO", sizeof(d6));
	printf("Test 6 (exact fit): [%s], return: %zu\n", d6, r);

	r = ft_strlcpy(d7, "HELLO", sizeof(d7));
	printf("Test 7 (small buffer): [%s], return: %zu\n", d7, r);

	r = ft_strlcpy(d8, "A", sizeof(d8));
	printf("Test 8 (one character): [%s], return: %zu\n", d8, r);

	r = ft_strlcpy(d9, "", 0);
	printf("Test 9 (empty + size 0): [%s], return: %zu\n", d9, r);

	r = ft_strlcpy(d10, "ABC", 4);
	printf("Test 10 (size = src length + 1): [%s], return: %zu\n",
		d10, r);

	r = ft_strlcpy(d11, "HELLO", 0);
	printf("Test 11 (size 0, raw bytes): %c %c %c, return: %zu\n",
		d11[0], d11[1], d11[2], r);

	r = ft_strlcpy(d12, "123456789", 5);
	printf("Test 12 (return on truncation): [%s], return: %zu\n",
		d12, r);

	return (0);
}*/