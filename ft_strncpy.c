/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 23:49:05 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 01:25:10 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (len > 0 && src[i])
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}