/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:52:51 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/10 18:00:23 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	start = malloc(sizeof(start) * (len + 1));
	if (!start)
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == start[j])
		{
			if (start[j] == '\0')
				return (start);
			i++;
			j++;
		}
		i++;
	}
}

int	main(void)
{
	
}
