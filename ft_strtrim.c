/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:45:13 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/16 09:09:29 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	unsigned int	start;
	char			*dest;
	size_t			len;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] != '\0' && check_sep(s[start], set))
		start++;
	len = ft_strlen(s) - 1;
	if (start == len + 1)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	while (check_sep(s[len], set))
		len--;
	len = len - start + 1;
	dest = ft_substr(s, start, len);
	if (!dest)
		return (NULL);
	return (dest);
}

/*

int	main(void)
{
	char	tab1[] = "LUFFY BABINKS IS THE NEW KINGDOM OF LUFFY LUFFY";
	char	tab2[] = "LUFFY";

	printf("%s", ft_strtrim(tab1, tab2));
	return (0);
}*/
