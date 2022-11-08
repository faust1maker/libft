/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:15:08 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 17:53:35 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = (unsigned char) c;
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
}*/
