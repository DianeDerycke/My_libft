/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:28:36 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/12 20:40:24 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{	
		(*(char*)dst) = (*(char*)src);
		dst++;
		src++;
		i++;
	}
	(*(char*)dst) = '\0';
	return ((void*)(dst - i));
}
/*
int		main(int argc, char **argv)
{
	(void)argc;
	char	dst[20];
	char	p[20];

	printf("%s\n", (char*)ft_memcpy(dst, argv[1], 1));
	printf("%s\n", (char*)memcpy(p, argv[2], 1));
	printf("dst len = ");
	printf("%lu\n", strlen(dst));
	printf("p len = ");
	printf("%lu\n", strlen(p));
	bzero(dst, strlen(dst));
	bzero(p,strlen(p));
	return (0);
}*/