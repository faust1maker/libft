/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:35:06 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 11:08:21 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*

int	main(void)
{
	char	tab1[] = "BABINKS";
	char	tab2[] = "IS A TERRIBLY WRONG";
	char	tab3[] = "BUT STILL VERY LOVELY";
	char	tab4[] = "BABBBBBBBBOIIIII";
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;

	list1 = ft_lstnew(tab1);
	list2 = ft_lstnew(tab2);
	list3 = ft_lstnew(tab3);
	list4 = ft_lstnew(tab4);
	ft_lstadd_front(&list2, list1);
	ft_lstadd_back(&list2, list3);
	ft_lstadd_back(&list3, list4);
	printf("%s \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%s \n", (char *)list1->next->next->content);
	printf("%s \n", (char *)list1->next->next->next->content);
	printf("LIST SIZE : %d", ft_lstsize(list1));
	return (0);
}*/
