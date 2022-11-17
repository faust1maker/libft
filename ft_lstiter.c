/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:48:34 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 16:21:33 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*

static void	ft_putstr_test(void *str)
{
	int	i;
	char	*tab;

	tab = (char *)str;
	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
}

int	main(void)
{
	char	tab1[] = "JSUIS LE STAND ";
	char	tab2[] = "DE VICTOR ";
	char	tab3[] = "LE PLUS GRAND BG DU MONDE ";
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	list1 = ft_lstnew(tab1);
	list2 = ft_lstnew(tab2);
	list3 = ft_lstnew(tab3);
	ft_lstadd_back(&list2, list3);
	ft_lstadd_front(&list2, list1);
	printf("%s \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%s \n", (char *)list1->next->next->content);
	ft_lstiter(list1, ft_putstr_test);
	return (0);
}*/
