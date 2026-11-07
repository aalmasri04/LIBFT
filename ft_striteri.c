/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:37:41 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/31 20:36:24 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void change_char(unsigned int i, char *c)
{
    if (i == 1)
        *c = 'O';
}

int main(void)
{
    char s[] = "cat";

    ft_striteri(s, change_char);
    printf("Result: %s\n", s);
    return (0);
}*/
