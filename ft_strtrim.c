/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:09:02 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/18 21:36:01 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*cpy;

	cpy = 0;
	start = 0;
	end = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(s));
	while (s[start] <= 32)
		start++;
	while (s[end] <= 32)
		end--;
	if (start == 0 || end == ft_strlen(s))
		return (ft_strdup(s));
	else
		cpy = (char*)malloc(sizeof(char) * (end - start) + 1);
	if (cpy == NULL)
		return (NULL);
	return (cpy = ft_strsub(s, start, (ft_strlen(s) - start) -
				(ft_strlen(s) - end - 1)));
}
