/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:39:36 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 00:10:10 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	if(!s || s == NULL)
		return(0);
	while(s[i])
		i++;
	return (i);
}

/*int		main(void)
{
	size_t	res1;
	size_t	res2;

	res1 = 0;
	res2 = 0;

	res1 = ft_strlen("ABCDEF");
	res2 = strlen("ABCDEF");
	if (res1 == res2)
		printf("%s\n","TEST 1 GOOD :D");
	else
		printf("(%s\n","TEST 1 FAIL :(");

	res1 = ft_strlen("");
	res2 = strlen("");
	if (res1 == res2)
		printf("%s\n","TEST 2 GOOD :D");
	else
		printf("(%s)\n","TEST 2 FAIL :(");

		res1 = ft_strlen("AB C     Q FOISJFO JF ");
	res2 = strlen("AB C     Q FOISJFO JF ");
	if (res1 == res2)
		printf("%s\n","TEST 3 GOOD :D");
	else
		printf("(%s)\n","TEST 3 FAIL :(");

		res1 = ft_strlen("\n");
	res2 = strlen("\n");
	if (res1 == res2)
		printf("%s\n","TEST 4 GOOD :D");
	else
		printf("%s\n","TEST 4 FAIL :(");
	return (0);
}*/