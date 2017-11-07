/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 00:39:35 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 00:10:03 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int		i;
	int			*tmp;

	tmp = s;
	i = 0;
	if(!s)
		return (0);
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return(s);
}