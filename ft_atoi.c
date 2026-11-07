/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 09:41:24 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/29 18:46:56 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*void	test(const char *str, int n)
{
	int	expected;
	int	actual;

	expected = atoi(str);
	actual = ft_atoi(str);
	printf("Test %2d: %-5s | expected: %d, got: %d\n",
		n, expected == actual ? "PASS" : "FAIL", expected, actual);
}

int	main(void)
{
	test("42", 1);
	test("-42", 2);
	test("+42", 3);
	test("   123", 4);
	test(" \t\n-56", 5);
	test("123abc", 6);
	test("abc123", 7);
	test("", 8);
	test("0", 9);
	test("-0", 10);
	test("--42", 11);
	test("+-42", 12);
	test("2147483647", 13);
	test("-2147483648", 14);
	test("  +00123xyz", 15);
	return (0);
}*/
