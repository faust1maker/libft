/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:32:38 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/08 12:08:44 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = '\t';
	a = ft_isalpha(b);
	printf("%d", a);
	return (0);
}*/