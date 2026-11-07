/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:05:32 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:15:40 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenofs;
	char	*dest;
	size_t	i;

	if (s == NULL)
		return (NULL);
	lenofs = ft_strlen(s);
	if (start >= lenofs)
		return (ft_strdup(""));
	if (len > lenofs - start)
		len = lenofs - start;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char *result;

    result = ft_substr("Hello World", 6, 5);
    printf("Result: %s\n", result);
    free(result);

    result = ft_substr("Programming", 3, 4);
    printf("Result: %s\n", result);
    free(result);

    result = ft_substr("Hello", 10, 3);
    printf("Result: '%s'\n", result);
    free(result);

    return (0);
}*/