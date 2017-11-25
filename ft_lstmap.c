/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 23:19:24 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/25 01:34:50 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_chain;
	t_list		*alst;
	t_list		*tmp;

	alst = NULL;
	tmp = NULL;
	while (lst)
	{
		new_chain = f(lst);
		if (alst == NULL) {
			alst = new_chain;
			tmp = alst;
		}
		else {
			tmp->next = new_chain;
			tmp = new_chain;
		}
		lst = lst->next;
	}
	return (alst);
}

// t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
// {
// 	t_list		*new_list;
// 	t_list		*new_elem;
// 	t_list		*tmp;

// 	tmp = NULL;
// 	new_list = NULL;
// 	while (lst)
// 	{
// 		if (!(new_list = (t_list *)malloc(sizeof(t_list))))
// 			return (NULL);
// 		new_list = f(lst);
// 		new_list->next = new_elem;
// 		new = new->next;
// 		lst = lst->next;
// 	}
// 	return (first_elem);
// }