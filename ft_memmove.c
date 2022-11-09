/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:55:49 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/09 16:18:51 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (n--)
			(*(unsigned char *)(dest + n)) = (*(unsigned char *)(src + n));
	}
	return (dest);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	tab1[] = "BABINKS MAH BOI";
	char	tab2[] = "YEAH HE KNOWS THAT STUFF";

	ft_memmove(tab2, tab2, 7);
	printf("%s", tab2);
	memmove(tab2, tab2, 7);
	printf("%s", tab2);
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!n)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, n);
	else if (d > s)
	{
		while ((int)n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (d);
}*/
