/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:11:06 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 18:56:33 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*dest;

	nb = n;
	len = count_len(nb);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		len--;
		dest[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest[0] = '0';
	return (dest);
}

/*int main(void)
{
    char *s;

    s = ft_itoa(429);
    printf("429: %s\n", s);
    free(s);
    s = ft_itoa(-429);
    printf("-429: %s\n", s);
    free(s);
    s = ft_itoa(0);
    printf("0: %s\n", s);
    free(s);
    s = ft_itoa(INT_MIN);
    printf("INT_MIN: %s\n", s);
    free(s);
    return (0);
}*/