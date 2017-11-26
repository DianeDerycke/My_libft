/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 01:09:26 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/26 02:03:40 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_double_free(char ***tab)
{
	int		i;

	i = 0;
	while (*tab[i])
	{
		free(*tab[i]);
		*tab[i] = NULL;
		i++;
	}
	free(*tab);
	*tab = NULL;
}
