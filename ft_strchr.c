/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:41:19 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/16 02:28:01 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*ptr;

	ptr = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (((char)c) == s[i])
			return ((char*)(s + i));
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char*)(s + i));
	return (NULL);
}
