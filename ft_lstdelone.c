/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 23:15:11 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/22 04:41:06 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;
	t_list		*maillon;

	maillon = *alst;
	tmp = 0;
	if (maillon)
	{
		tmp->next = maillon->next;
		del(maillon->content, maillon->content_size);
		free(maillon);
		maillon->next = tmp->next;
		ft_memdel((void *)alst);
	}
}
