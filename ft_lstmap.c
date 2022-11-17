/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:48:57 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/17 17:04:58 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*wagon;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		wagon = ft_lstnew(f(lst->content));
		if (!wagon)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, wagon);
		lst = lst->next;
	}
	return (new_list);
}

/*

static void	*ft_memcpy_tester(void *str)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (((char *)str)[i])
	{
		dest[i] = ((char *)str)[i];
		i++;
	}
	dest[i] = '\0';
	return ((char *)dest);
}

void	ft_delone_tester(void *s)
{
	ft_memset(s, '\0', 1);
}

int	main(void)
{
	char	tab1[] = "QUE DES BG";
	char	tab2[] = "PARTOUT AUTOUR";
	char	tab3[] = "DE NOUUUUUS";
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*ultimate_list;

	list1 = ft_lstnew(tab1);
	list2 = ft_lstnew(tab2);
	list3 = ft_lstnew(tab3);
	ft_lstadd_front(&list2, list1);
	ft_lstadd_back(&list2, list3);
	printf("%s \n", (char *)list1->content);
	printf("%p \n", (char *)list1->content);
	printf("%s \n", (char *)list1->next->content);
	printf("%p \n", (char *)list1->next->content);
	printf("%s \n", (char *)list1->next->next->content);
	printf("%p \n", (char *)list1->next->next->content);
	ultimate_list = ft_lstmap(list1, ft_memcpy_tester, ft_delone_tester);
	printf("%s \n", (char *)ultimate_list->content);
	printf("%p \n", (char *)ultimate_list->content);
	printf("%s \n", (char *)ultimate_list->next->content);
	printf("%p \n", (char *)ultimate_list->content);
	printf("%s \n", (char *)ultimate_list->next->next->content);
	printf("%p \n", (char *)ultimate_list->next->next->content);
	return (0);
}*/
