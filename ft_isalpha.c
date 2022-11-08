/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:32:38 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/07 16:43:43 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		|| ((unsigned char) c >= 'a' && (unsigned char) c <= 'z'))
		return (1);
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = 'B';
	a = ft_isalpha(b);
	printf("%d", a);
	return (0);
}*/
