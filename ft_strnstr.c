/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:15:17 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/19 08:30:50 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tmp;

	tmp = 0;
	tmp = ft_strncpy(tmp, big, len);
	if (tmp =='\0' && little == '\0')
		return (tmp);
	while (len)
	{
		if (ft_strncmp(tmp, little, ft_strlen(little)) == 0)
			return (tmp);
		tmp++;
		len = len - ft_strlen(little);
	}
	return (NULL);
}