/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 05:32:55 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/09/25 20:26:58 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		lenn(const unsigned char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	*ft_memccpy(void *dest, void *restrict src, int c, size_t n)
{
	unsigned char	tmp;
	size_t			i;
	size_t			len;
	unsigned char	*tmpp;

	i = 0;
	tmp = c;
	if(!dest || !src || !n)
		return(NULL);
	while(i < n)
	{
		if((c - (*(int*)src)) == 0)
			return(dest);
			dest = src;
		src++;
		dest++;
		i++;
	}
	tmp = &dest;
	printf("%s\n", tmpp);
	return(NULL);
}

int		main(void)
{
	unsigned char	tmp[11] = "";
	unsigned char	tmp1[10] = "HI";
	void			*dest;
	void			*src;

	dest = tmp;
	src = tmp1;
	ft_memccpy(dest, src, 43, 2);
	return (0);
}