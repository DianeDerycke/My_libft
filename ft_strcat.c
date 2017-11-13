/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:48:56 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/13 21:58:05 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		n;
	int		len;
	int		i;

	n = ft_strlen(s1);
	len = ft_strlen(s2);
	i = 0;
	while (s2[i])
	{
		s1[n] = s2[i];
		i++;
		n++;
	}
	s1[n] = '\0';
	return (s1);
}
