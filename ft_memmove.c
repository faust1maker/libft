/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:55:49 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/09 10:44:34 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!s || !d)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while ((int)n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (d);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "BABINKS MAH BOI";
	char	tab2[] = "YEAH HE KNOWS THAT STUFF";

	ft_memmove(tab1, tab2, 7);
	printf("%s", tab1);
	return (0);
}*/
