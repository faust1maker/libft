/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:59:11 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 08:24:03 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	max_len;

	d_len = ft_strlen(dst);
	max_len = ft_strlen(src) + d_len;
	if (!size)
		return (ft_strlen(src));
	if (size < d_len)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] != '\0' && d_len + i < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (max_len);
}

/*

int	main(void)
{
	char	tab1[] = "BABINKS ";
	char	tab2[] = "MAH BOI MAH MEN";

	ft_strlcat(tab1, tab2, 25);
	printf("%s", tab1);
	return (0);
}*/
