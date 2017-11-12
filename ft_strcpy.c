/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 22:37:15 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/12 16:42:53 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}