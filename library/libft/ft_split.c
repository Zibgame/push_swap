/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:17:15 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/19 01:43:48 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word_dup(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	word[len] = 0;
	while (len--)
		word[len] = s[len];
	return (word);
}

static void	*free_all(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[i] = word_dup(s, c);
			if (!res[i++])
				return (free_all(res, i - 1));
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}

// int main(void)
// {
//     char **tab = ft_split("a-b-c", '-');
//     for (int i = 0; tab[i]; i++)
//         printf("%s\n", tab[i]);
//     for (int i = 0; tab[i]; i++)
//         free(tab[i]);
//     free(tab);
//     return (0);
// }
