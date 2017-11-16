/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 05:32:55 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/16 02:49:28 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		(*(unsigned char*)dst) = (*(unsigned char*)src);
		if (((unsigned char)c) == (*(unsigned char*)src))
		{
			dst++;
			(*(unsigned char*)dst) = '\0';
			return ((unsigned char*)dst);
		}
		dst++;
		src++;
		i++;
	}
	(*(unsigned char*)dst) = '\0';
	return (NULL);
}
