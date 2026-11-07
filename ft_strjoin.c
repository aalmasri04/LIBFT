/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:09:40 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:09:32 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char *result;

    result = ft_strjoin("Hello ", "World");
    printf("Result: %s\n", result);
    free(result);

    result = ft_strjoin("Apple", "Pie");
    printf("Result: %s\n", result);
    free(result);

    result = ft_strjoin("", "42");
    printf("Result: %s\n", result);
    free(result);

    result = ft_strjoin("", "");
    printf("Result: '%s'\n", result);
    free(result);

    return (0);
}*/