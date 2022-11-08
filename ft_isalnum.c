/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:44:50 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 16:32:07 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		|| ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		|| ((unsigned char) c >= '0' && (unsigned char) c <= '9'))
		return (1);
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = '\t';
	a = ft_isalnum(b);
	printf("%d", a);
	return (0);
}*/
