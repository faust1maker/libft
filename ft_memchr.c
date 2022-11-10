/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:54:44 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 08:26:59 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!n || !c)
		return (NULL);
	i = 0;
	while (((unsigned char *)s)[i] != '\0' && (i < n - 1))
	{
		if (c == ((unsigned char *)s)[i])
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*

int	main(void)
{
	char	tab1[] = "babababBINKS";
	char	c;

	c = '\0';
	printf("%s   \n", ft_memchr(tab1, c, 0));
	printf("%s", memchr(tab1, c, 0));
	return (0);
}*/
