/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:04:26 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 14:59:48 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return (&((char *)s)[len]);
		len--;
	}
	return (NULL);
}

/*

int	main(void)
{
	char	tab1[] = "IL PARAIT QUE RAF LE BG";
	char	a;

	a = '\0';
	printf("%s", ft_strrchr(tab1, a));
	printf("%s", strrchr(tab1, a));
	return (0);
}*/
