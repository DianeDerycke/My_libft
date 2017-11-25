/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:09:02 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/25 03:59:33 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*cpy;

	cpy = 0;
	start = 0;
	if (s)
		end = ft_strlen(s);
	if (!s)
		return (NULL);
	while (start < end && s[start] <= 32)
		start++;
	while (end > 0 && s[end] <= 32)
		end--;
	if (start >= end)
		return (ft_strdup(""));
	len = end - start + 1;
	if (!(cpy = (char *)malloc(len + 1)))
		return (NULL);
	cpy[len] = '\0';
	ft_memcpy(cpy, s + start, len);
	return (cpy);
}
