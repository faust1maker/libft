/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:33:03 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 11:36:23 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*

int	main(void)
{
	char	tab1[] = "BABINKS";
	char	tab2[] = "IS THE";
	char	tab3[] = "LAST ?";
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	list1 = ft_lstnew(tab1);
	list2 = ft_lstnew(tab2);
	list3 = ft_lstnew(tab3);
	ft_lstadd_front(&list2, list1);
	ft_lstadd_back(&list2, list3);
	printf("%s \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%p \n", (char *)list1->next->next->content);
	printf("%p", (char *)ft_lstlast(list1)->content);
	return (0);
}*/
