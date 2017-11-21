/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:17 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/21 04:57:21 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	j = ft_strlen(little);
	i = 0;
	while (i < len && big[i])
	{
		if (*little == '\0' || ft_strcmp(big, little) == 0)
			return ((char *)big);
		while (*little != big[i] && i < len && big[i])
			i++;
		while (*little == big[i] && i < len && big[i] && *little)
		{
			little++;
			i++;
		}
		if (*little == '\0')
			return ((char *)big + i - j);
	}
	return (NULL);
}
