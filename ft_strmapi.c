/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:07:14 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:52 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	i = 0;
	res = malloc(sizeof(*res) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*

char	ft_toupper_test(unsigned int i, char s)
{
	if (s >= 'a' && s<= 'z')
		s -= 32;
	return (s);
}

int	main(void)
{
	char	tab1[] = "babinks";

	printf("%s", ft_strmapi(tab1, ft_toupper_test));
	return (0);
}*/
