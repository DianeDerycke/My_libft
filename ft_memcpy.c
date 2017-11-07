/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:28:36 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 00:10:02 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		lenn(const unsigned char *str)
{
	unsigned int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned char	*tmp;
	unsigned char	*src1;
	unsigned int	i;
	unsigned int			len;

	src1 = src;
	tmp = dest;
	len = lenn(tmp);
	i = 0;
	if(!src || !dest)
		return(dest);
	while (i < n)
	{
		tmp[len] = src1[i];
		len++;
		i++;
	}
	dest = tmp; 
	return(dest);
}