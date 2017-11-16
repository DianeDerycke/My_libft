/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:48:56 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/16 21:59:33 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		n;
	size_t		i;

	n = ft_strlen(s1);
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s2[i])
	{
		s1[n] = s2[i];
		i++;
		n++;
	}
	s1[n] = '\0';
	return (s1);
}
