/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:55:48 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 14:18:04 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb * size > 2147483647)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, nmemb * size);
	return (temp);
}

/*

#include <unistd.h>

int	main(void)
{
	char	*tab1;
	char	*tab2;
	size_t	i;
	size_t	nmembalt;

	nmembalt = 12;
	tab1 = ft_calloc(nmembalt, sizeof(char));
	tab2 = calloc(nmembalt, sizeof(char));
	i = 0;
	while (i < nmembalt)
	{
		write(1, &tab1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < nmembalt)
	{
		write(1, &tab2[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
