/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:55:49 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/08 17:50:12 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	if (dest < src)
	{
		while (i < n)
			i++;
		while (i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dest)[0] = ((char *)src)[0];
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
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
