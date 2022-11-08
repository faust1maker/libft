/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:32:24 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 16:33:20 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((unsigned char) c >= '0' && (unsigned char) c <= '9')
		return (1);
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = 'A';
	a = ft_isdigit(b);
	printf("%d", a);
}*/
