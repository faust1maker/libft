/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:03:50 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 10:44:05 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0 ;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i] && i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*

int	main(void)
{
	char	tab1[] = "BABINKS";
	char	tab2[] = "BABOIS";
	int	a;
	int	b;

	a = strncmp(tab1, tab2, 3);
	b = ft_strncmp(tab1, tab2, 3);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/
