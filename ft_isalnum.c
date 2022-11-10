/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:44:50 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 08:26:05 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*

int	main(void)
{
	int	a;
	int	b;

	b = '8';
	a = ft_isalnum(b);
	printf("%d", a);
	return (0);
}*/
