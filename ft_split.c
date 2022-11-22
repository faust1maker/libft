/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:32:37 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/22 10:06:20 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	strlen_sep(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*make_word(const char *s, char c)
{
	int		i;
	int		len;
	char	*word;

	len = strlen_sep(s, c);
	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		word[i++] = *(s++);
	word[i] = '\0';
	return (word);
}

static void	martin_luther_king(char **split, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (i < nb)
	{
		free(split[i]);
		i++;
	}
	free(split);
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
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i] = make_word(s, c);
			if (!tab[i++])
			{
				martin_luther_king(tab, i);
				return (NULL);
			}
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

/*

int	main(int ac, char **av)
{
	int	i;
	char	**tab1;
//	char	b = 32;

	if (ac != 3)
		return (0);
	tab1 = ft_split(av[1], av[2][0]);
	i = 0;
	while (i < word_count(av[1], av[2][0]))
	{
		printf("%s \n", tab1[i]);
		free(tab1[i++]);
	}
	free(tab1);
	return (0);
}*/
