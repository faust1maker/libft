/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:07:14 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/14 10:26:54 by fbrisson         ###   ########.fr       */
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

char	*ft_toupper_test(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

int	main(void)
{
	char	tab1[] = "babinks";

	printf("%s", ft_strmapi(tab1, ft_toupper_test(tab1)));
	return (0);
}
