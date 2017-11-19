/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 01:15:15 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/19 03:35:14 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)tmp);
		i++;
		tmp++;
	}
	return (NULL);
}
