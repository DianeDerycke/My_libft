/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:09:02 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/20 23:19:37 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*cpy;

	start = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	if (*s == '\0')
		return (ft_strndup(s, 1));
	while (s[start] <= 32 && s[start])
		start++;
	end = ft_strlen(s);
	while (s[end] <= 32 && end > 0)
		end--;
	if (!end)
		return (ft_strndup(s, 0));
	if (!start || end == ft_strlen(s))
		return (ft_strdup(s));
	if (!(cpy = (char*)malloc(sizeof(char) * (end - start) + 1)))
		return (NULL);
	return (cpy = ft_strsub(s, start, (ft_strlen(s) - start) -
				(ft_strlen(s) - end - 1)));
}
