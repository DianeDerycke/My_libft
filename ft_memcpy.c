/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:28:36 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/09/25 05:30:12 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		lenn(const unsigned char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*src1;
	unsigned int	i;
	size_t			len;

	src1 = src;
	tmp = dest;
	len = lenn(tmp);
	i = 0;
	if(!src || !dest)
		return(dest);
	while (i < n)
	{
		tmp[len] = src1[i];
		len++;
		i++;
	}
	dest = tmp; 
	return(dest);
}