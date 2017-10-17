/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 00:39:35 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/09/25 05:30:11 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	int			*tmp;

	tmp = s;
	i = 0;
	if(!s)
		return (0);
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return(s);
}