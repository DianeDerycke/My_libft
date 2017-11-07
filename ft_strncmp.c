/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 21:21:33 by dderycke          #+#    #+#             */
/*   Updated: 2017/10/23 00:10:11 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (s1[i - 1] - s2[i - 1]);
	}
	return (0);
}

/*int		main(void)
{
	int 	res1;
	int		res2;

	res1 = 0;
	res2 = 0;

	res1 = ft_strncmp("woo", "woooo", 1);
	res2 = strncmp("woo", "woooo", 1);
	if (res1 == res2)
		printf("%s\n","TEST 1 OK :D");
	else
		printf("%s\n", "TEST 1 FAIL :(");

	res1 = ft_strncmp("", "", 10);
	res2 = strncmp("", "", 10);
	if (res1 == res2)
		printf("%s\n","TEST 2 OK :D");
	else
		printf("%s\n", "TEST 2 FAIL :(");

	res1 = ft_strncmp("Hello", "World", 10);
	res2 = strncmp("Hello", "World", 10);
	if (res1 == res2)
		printf("%s\n","TEST 3 OK :D");
	else
		printf("%s\n", "TEST 3 FAIL :(");


	res1 = ft_strncmp("Hello", "World", 10);
	res2 = strncmp("Hello", "World", 10);
	if (res1 == res2)
		printf("%s\n","TEST 4 OK :D");
	else
		printf("%s\n", "TEST 4 FAIL :(");


	res1 = ft_strncmp("abc", "abc", 6);
	res2 = strncmp("abc", "abc", 6);
	if (res1 == res2)
		printf("%s\n","TEST 5 OK :D");
	else
		printf("%s\n", "TEST 5 FAIL :(");

		res1 = ft_strncmp("abc", "abc", 0);
	res2 = strncmp("abc", "abc", 0);
	if (res1 == res2)
		printf("%s\n","TEST 6 OK :D");
	else
		printf("%s\n", "TEST 6 FAIL :(");

	return(0);
}*/
