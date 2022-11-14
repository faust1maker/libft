/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:39:23 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 16:08:57 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	int		i;

	temp = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return (temp);
		temp++;
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return (temp);
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
