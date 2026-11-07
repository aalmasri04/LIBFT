/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:23:00 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/28 17:57:47 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/*int	main(void)
{
	int				*arr;
	unsigned char	*bytes;
	void			*ptr;
	int				i;

	printf("TEST 1: Allocate 5 integers\n");
	arr = ft_calloc(5, sizeof(int));
	if (arr == NULL)
		printf("FAIL: Allocation returned NULL\n");
	else
	{
		i = 0;
		while (i < 5)
		{
			printf("arr[%d] = %d\n", i, arr[i]);
			i++;
		}
		free(arr);
	}

	printf("\nTEST 2: Check every allocated byte\n");
	bytes = ft_calloc(10, sizeof(char));
	if (bytes == NULL)
		printf("FAIL: Allocation returned NULL\n");
	else
	{
		i = 0;
		while (i < 10 && bytes[i] == 0)
			i++;
		if (i == 10)
			printf("PASS: All 10 bytes are zero\n");
		else
			printf("FAIL: Byte %d is not zero\n", i);
		free(bytes);
	}

	printf("\nTEST 3: Multiplication overflow\n");
	ptr = ft_calloc(SIZE_MAX, 2);
	if (ptr == NULL)
		printf("PASS: Overflow rejected\n");
	else
	{
		printf("FAIL: Overflow was not rejected\n");
		free(ptr);
	}

	printf("\nTEST 4: Zero elements\n");
	ptr = ft_calloc(0, sizeof(int));
	printf("PASS: Zero-size request handled\n");
	free(ptr);

	printf("\nTEST 5: One integer\n");
	arr = ft_calloc(1, sizeof(int));
	if (arr != NULL && arr[0] == 0)
		printf("PASS: Integer initialized to zero\n");
	else
		printf("FAIL\n");
	free(arr);

	return (0);
}*/