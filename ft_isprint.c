/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:55:33 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 17:01:14 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((unsigned char) c >= 32 && (unsigned char) c <= 126)
		return (1);
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = 31;
	a = ft_isprint(b);
	printf("%d", a);
	return (0);
}*/
