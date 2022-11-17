/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:53:22 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 15:20:03 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if(lst && del)
	{
		current = *lst;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			ft_lstdelone(temp, del);
		}
		*lst = NULL;
	}
}

/*

void	ft_lstdel_test(void *content)
{
	content = 0;
}

int	main(void)
{
	char	tab1[] = "BABINKS";
	char	tab2[] = "BUUUURBINKS";
	char	tab3[] = "ALAN EST UN STREUMON";
	char	tab4[] = "JACK IS A FUTURE LEGEND";
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
	printf("%s", (char *)list1->next->next->next->content);
	ft_lstclear(list1->content, ft_lstdel_test);
	return (0);
}*/
