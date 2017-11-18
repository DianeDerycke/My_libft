/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 05:32:55 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/18 21:29:01 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		if (((unsigned char)c) == tmp2[i])
			return (dst);
		i++;
	}
	tmp1[i] = '\0';
	return (NULL);
}
