/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 23:19:24 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/24 05:59:05 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*first_elem;
	t_list		*new;

	new = NULL;
	first_elem = new;
	while (lst)
	{
		if (!(new = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		if (!first_elem)
			first_elem = new;
		new = f(lst);
		new->next = NULL;
		new = new->next;
		lst = lst->next;
	}
	return (first_elem);
}