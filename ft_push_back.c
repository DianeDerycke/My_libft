/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 23:50:32 by DERYCKE           #+#    #+#             */
/*   Updated: 2018/03/21 11:30:00 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_push_back(t_dblist *lst, char *str)
{
	t_elem	*new;

	new = (t_elem *)malloc(sizeof(t_elem));
	if (!new)
   		return ;
	new->content = str;
	new->prev = lst->last;
	new->next = NULL;
	if (lst->last)
		lst->last->next = new;
	else 
		lst->first = new;
   lst->last = new;
}