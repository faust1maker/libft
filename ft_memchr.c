/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:54:44 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 16:08:37 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*temp == (unsigned char)c)
			return ((void *)s + i);
		i++;
		temp++;
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
