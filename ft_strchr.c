/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:39:23 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 10:42:52 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)&(s[i]));
	return (NULL);
}

/*

int	main(void)
{
	char	tab1[] = "IL PARAIT QUE VICTOR LE BG";
	char	a;

	a = '\0';
	printf("%s", ft_strchr(tab1, a));
	printf("%s", strchr(tab1, a));
	return (0);
}*/
