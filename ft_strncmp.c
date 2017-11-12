/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 21:21:33 by dderycke          #+#    #+#             */
/*   Updated: 2017/11/12 16:42:45 by dideryck         ###   ########.fr       */
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