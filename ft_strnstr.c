/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:17 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/20 04:08:16 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*little != *big && i < len && *big)
	{
		big++;
		i++;
	}
	if (ft_strncmp(big, little, ft_strlen(little)) == 0)
		return ((char *)big);
	return (NULL);
}