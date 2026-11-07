/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:17:08 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:15:00 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	return (ft_substr(s1, start, end - start));
}

/*int main(void)
{
    char *result;

    result = ft_strtrim("  Hello  ", " ");
    printf("Test 1: '%s'\n", result);
    free(result);

    result = ft_strtrim("xxxxx", "x");
    printf("Test 2: '%s'\n", result);
    free(result);

    result = ft_strtrim("", "x");
    printf("Test 3: '%s'\n", result);
    free(result);

    result = ft_strtrim("xxHelloxWorldxx", "x");
    printf("Test 4: '%s'\n", result);
    free(result);

    return (0);
}*/