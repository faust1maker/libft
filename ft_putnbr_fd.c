/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:49:38 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/13 16:28:21 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long int	lnb;
	long int	div;
	long int	mod;

	lnb = n;
	if (lnb < 0)
	{
		lnb *= -1;
		ft_putchar_fd('-', fd);
	}
	div = lnb / 10;
	mod = lnb % 10;
	if (div != 0)
		ft_putnbr_fd(div, fd);
	ft_putchar_fd(48 + mod, fd);
}

/*

#include <limits.h>

int	main(void)
{
	int	a;
	int	fd;

	a = INT_MIN;
	fd = 1;
	ft_putnbr_fd(a, fd);
	return (0);
}*/
