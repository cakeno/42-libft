/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:30:20 by cnoba             #+#    #+#             */
/*   Updated: 2024/10/30 14:53:25 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_extract_word(char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static void	ft_free_split(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**ft_fill_split(char const *s, char c,
			char **result)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = ft_extract_word(s, c);
			if (!result[i])
			{
				ft_free_split(result, i);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	return (ft_fill_split(s, c, result));
}
