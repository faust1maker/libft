/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:40:43 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/08 16:00:00 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	i = 0;
	while (i++ < n)
		*d++ = *s++;
	return (d);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "BABINKS MAH BOI";
	char	tab2[] = "YEAH HE KNOWS THAT STUFF";

	ft_memcpy(tab1, tab2, 8);
	printf("%s", tab1);
	return (0);
}*/
