/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:08 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/08 12:23:40 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = c;
	return (s);
}

/*

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "BABINKS";
	char	c = 'F';

	s1 = malloc(sizeof(s1) + 1);
	printf("%s", ft_memset(s1, c, 3));
	return (0);
}

ccccc = ccccc | cccc <<8
|
0001
0011
0011

&
0001
0011
0001

^
0001
0011
0010

<< 2
0001
0100

>> 2
0100
0001*/
