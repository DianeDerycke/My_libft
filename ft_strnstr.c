/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:17 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/16 02:28:51 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	if (!little || !big)
		return (NULL);
	n = ft_strlen(little);
	while (big[i] && i < len)
	{
		if (ft_strncmp(big + i, little, n) == 0)
			return (((char*)big) + i);
		i++;
	}
	return (NULL);
}
