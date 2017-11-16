/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:37:19 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/16 18:49:04 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	if (!dst || !src)
		return (dst);
	if (len == 0)
		return (dst);
	while (i < len)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}
