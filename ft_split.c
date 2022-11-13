/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:32:37 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/13 15:35:05 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_sep(const char s, char c)
{
	if (c == s)
		return (1);
	return (0);
}

int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s)
			count++;
		while (*s && !check_sep(*s, c))
			s++;
	}
	return (count);
}

int	strlen_sep(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && !check_sep(s[i], c))
		i++;
	return (i);
}

char	*make_word(const char *s, char c)
{
	int		i;
	int		len;
	char	*word;

	len = strlen_sep(s, c);
	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*s && !check_sep(*s, c))
		word[i++] = *(s++);
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**tab;

	tab = malloc(sizeof(*tab) * (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s)
		{
			tab[i] = make_word(s, c);
			if (!tab[i++])
			{
				free(tab[i]);
				return (NULL);
			}
		}
		while (*s && !check_sep(*s, c))
			s++;
	}
	tab[i] = '\0';
	return (tab);
}

/*

int	main(int ac, char **av)
{
	int	i;
	char	**tab1;
	char	b = 32;

	if (ac != 2)
		return (0);
	tab1 = ft_split(av[1], b);
	i = 0;
	while (i < word_count(av[1], b))
	{
		printf("%s \n", tab1[i]);
		free(tab1[i++]);
	}
	free(tab1);
	return (0);
}*/
