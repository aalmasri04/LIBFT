/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:02:49 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 19:00:02 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;
	size_t				i;

	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = n;
	if (des > sr)
	{
		while (i > 0)
		{
			i--;
			des[i] = sr[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			des[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
