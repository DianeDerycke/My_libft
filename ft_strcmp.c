/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:08:41 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/12 16:42:54 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char* s1, const char *s2)
{
	size_t	n;

	n = 0;
	while (s1[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] == s2[n] ? 0 : s1[n] - s2[n]);
}

