/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 05:32:55 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 00:10:00 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static unsigned int		lenn(const unsigned char *str)
{
	unsigned int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

static void	*ft_memccpy(void *dest, void *restrict src, int c, unsigned int n)
{
	unsigned char	tmp;
	unsigned int			i;
	unsigned int			len;
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