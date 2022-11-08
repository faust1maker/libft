/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:42 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 18:19:17 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
		((unsigned char *)s)[i++] = 'D';
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "BABINKS";

	printf("%s", ft_bzero(&s1, 3));
	return (0);
}
