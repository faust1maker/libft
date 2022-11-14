/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:49:33 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 16:09:24 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*alts1;
	unsigned char	*alts2;
	size_t			i;

	alts1 = (unsigned char *)s1;
	alts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (alts1[i] != alts2[i])
			return (alts1[i] - alts2[i]);
		i++;
	}
	return (0);
}

/*

int	main(void)
{
	char	tab1[] = "BAHINKS";
	char	tab2[] = "BABINKS";

	printf("%d", ft_memcmp(tab1, tab2, 5));
	printf("%d", memcmp(tab1, tab2, 5));
	return (0);
}*/
