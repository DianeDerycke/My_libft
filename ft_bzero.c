/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 01:30:03 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/09/25 05:30:13 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*tmp;

	tmp = s;
	i = 0;
	if(!n)
		return;
	while(i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}