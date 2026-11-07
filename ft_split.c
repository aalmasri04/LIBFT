/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmasri <aalmasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:12:50 by aalmasri          #+#    #+#             */
/*   Updated: 2026/10/28 17:26:45 by aalmasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static char	*word_splitter(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **words, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static size_t	skip_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	words = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c);
			if (!words[j])
				return (free_words(words, j), NULL);
			i += skip_word(&s[i], c);
			j++;
		}
		else
			i++;
	}
	return (words[j] = NULL, words);
}

/*static void	test_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	printf("\nInput: \"%s\" | Separator: '%c'\n", s, c);
	result = ft_split(s, c);
	if (!result)
	{
		printf("Returned NULL\n");
		return ;
	}
	i = 0;
	while (result[i] != NULL)
	{
		printf("words[%zu] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	printf("Number of words: %zu\n", i);
	free(result);
}

int	main(void)
{
	test_split("Hello,World,42", ',');
	test_split(",,Hello,,World,", ',');
	test_split(",,,", ',');
	test_split("", ',');
	test_split("Hello", ',');
	test_split("Hello World 42", ' ');
	test_split("  Hello   World  ", ' ');
	test_split("abc", 'x');
	test_split("a", 'a');
	return (0);
}*/