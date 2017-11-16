/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 00:31:07 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/16 02:31:10 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len_dst;
	size_t		end;

	end = ft_strlen(dst);
	len_dst = ft_strlen(dst);
	i = 0;
	if (!dst || !src)
		return (0);
	while (i < (size - len_dst - 1))
	{
		if (i == size && src[i] != '\0')
		{
			return (len_dst + ft_strlen(src));
		}
		dst[end] = src[i];
		end++;
		i++;
	}
	if (i == len_dst + ft_strlen(src))
		dst[i] = '\0';
	return (len_dst + ft_strlen(src));
}
