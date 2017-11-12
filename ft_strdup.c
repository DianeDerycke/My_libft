/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/22 22:30:13 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/12 16:42:51 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*cpy;

	len = 0;
	i = 0;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	cpy = (char *)malloc((len + 1) * (sizeof(char)));
	while (i < len && s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}