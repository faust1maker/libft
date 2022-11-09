/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:25:32 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/09 10:25:07 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!(ft_strlen(src)) || !(ft_strlen(dst)))
		return (ft_strlen(src));
	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "BABINKS MAH BOI";
	char	tab2[] = "YEAH HE KNOWS ALL AROUND THIS";

	ft_strlcpy(tab1, tab2, 8);
	printf("%s", tab1);
	return (0);
}*/
