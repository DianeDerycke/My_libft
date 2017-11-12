/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 01:30:03 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/12 16:58:05 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*tmp;

	tmp = s;
	i = 0;
	if(!n)
		return;
	while(i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	char	*str;
	int		i;

	i = 0;
	ft_bzero(argv[1], 7);
	str = argv[1];
	while (i < 11)
	{
		printf("%c",str[i]);
		i++;
	}
	return (0);
}