/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:42 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/08 14:37:20 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	s1[] = "BABINKS";

	ft_bzero(s1, 3);
	printf("%s", s1);
	return (0);
}*/
