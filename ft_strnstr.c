/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:39:28 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 10:39:28 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	if (!len)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0' && (i + j) < len)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*

int	main(void)
{
	char	tab1[] = "THE ONE PIECE IS THE KEY SEARCH THE ONE PIECE SEARCH LAFTEL";
	char	tab2[] = "PIECE";

	printf("%s \n", ft_strnstr(tab1, tab2, 13));
	printf("%s", strstr(tab1, tab2));
	return (0);
}*/
