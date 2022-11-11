/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:29:40 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/11 19:43:20 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(*dest) * (size + 1));
	if (!dest)
		return (NULL);
	ft_memset(dest, '\0', size + 1);
	ft_strlcat(dest, s1, size + 1);
	ft_strlcat(dest, s2, size + 1);
	return (dest);
}

/*

int	main(void)
{
	char	tab1[] = "I WANNA BE";
	char	tab2[] = " THE GUY";

	printf("%s", ft_strjoin(tab1, tab2));
	return (0);

}*/
