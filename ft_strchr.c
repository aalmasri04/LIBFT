/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:04 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:06:30 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "HELLO";
	char	empty[] = "";
	char	*result;
	int		passed = 0;
	int		total = 10;

	result = ft_strchr(str, 'H');
	printf("Test 1 (first char): %s\n",
		result == str ? "PASS" : "FAIL");
	passed += (result == str);

	result = ft_strchr(str, 'L');
	printf("Test 2 (first repeated char): %s\n",
		result == str + 2 ? "PASS" : "FAIL");
	passed += (result == str + 2);

	result = ft_strchr(str, 'O');
	printf("Test 3 (last char): %s\n",
		result == str + 4 ? "PASS" : "FAIL");
	passed += (result == str + 4);

	result = ft_strchr(str, 'Z');
	printf("Test 4 (not found): %s\n",
		result == NULL ? "PASS" : "FAIL");
	passed += (result == NULL);

	result = ft_strchr(str, '\0');
	printf("Test 5 (null terminator): %s\n",
		result == str + 5 ? "PASS" : "FAIL");
	passed += (result == str + 5);

	result = ft_strchr(empty, 'A');
	printf("Test 6 (empty, not found): %s\n",
		result == NULL ? "PASS" : "FAIL");
	passed += (result == NULL);

	result = ft_strchr(empty, '\0');
	printf("Test 7 (empty, null): %s\n",
		result == empty ? "PASS" : "FAIL");
	passed += (result == empty);

	result = ft_strchr(str, 328);
	printf("Test 8 (int conversion): %s\n",
		result == str ? "PASS" : "FAIL");
	passed += (result == str);

	result = ft_strchr(str, 256);
	printf("Test 9 (int becomes null): %s\n",
		result == str + 5 ? "PASS" : "FAIL");
	passed += (result == str + 5);

	result = ft_strchr(str, 'E');
	printf("Test 10 (compare with strchr): %s\n",
		result == strchr(str, 'E') ? "PASS" : "FAIL");
	passed += (result == strchr(str, 'E'));

	printf("\nResult: %d/%d tests passed\n", passed, total);
	return (0);
}*/