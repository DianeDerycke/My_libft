/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:28:36 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/18 21:29:57 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmp1;
	char		*tmp2;

	tmp1 = (char*)dst;
	tmp2 = (char*)src;
	i = 0;
	if (n == 0)
		return (dst);
	while (i < n - 1)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	tmp1[i] = '\0';
	return (dst);
}
