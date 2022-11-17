/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:38 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 12:14:07 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*

void	ft_delone_test(void *s)
{
	ft_memset(s, '\0', 1);
}

int	main(void)
{
	char	tab1[] = "BABINKS";
	char	tab2[] = "WILL SUCCEED";
	char	tab3[] = "I'M SURE OF IT";
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	list1 = ft_lstnew(tab1);
	list2 = ft_lstnew(tab2);
	list3 = ft_lstnew(tab3);
	ft_lstadd_back(&list1, list2);
	ft_lstadd_back(&list2, list3);
	printf("%s \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%s \n", (char *)list1->next->next->content);
	ft_lstdelone(list1->content, ft_delone_test);
	printf("%s \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%s", (char *)list1->next->next->content);
	return (0);

}*/
