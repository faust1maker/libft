/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:52:51 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/16 08:33:02 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	if (ft_strlen(s + start) < len)
		dest = malloc(sizeof(*dest) * (ft_strlen(s + start) + 1));
	else
		dest = malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*

int	main(void)
{
	char	tab1[] = "HOOD IS THE NEW TREND BABINKS IS THE WEY";
	char	*tab2;
	int	a = 22;
	int	b = 7;

	tab2 = ft_substr(tab1, a, b);
	printf("%s \n", tab2);
	return (0);
}*/
