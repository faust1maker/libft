/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:04:26 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/09 16:31:13 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == 0)
		return ((char *)&(s[i]));
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	tab1[] = "IL PARAIT QUE RAF LE BG";
	char	a;

	a = '\0';
	printf("%s", ft_strrchr(tab1, a));
	printf("%s", strrchr(tab1, a));
	return (0);
}*/
