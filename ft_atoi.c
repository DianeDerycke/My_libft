/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 06:26:17 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/10/23 00:09:58 by DERYCKE          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	unsigned int	nbr;
	unsigned int	neg;
	nbr = 0;
	neg = 0;
	i = 0;

	while(str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = (nbr * 10) + (str[i] - '0');
			i++;
		}
		return (neg == 0 ? nbr : -nbr);
}

/*int		main(int argc, char **argv)
{
	(void)argc;
	int		res1;
	int		res2;

	res1 = ft_atoi(argv[1]);
	res2 = atoi(argv[1]);
	if (res1 == res2)
		printf("%s\n", "TEST OK :D");
	else
	{
		printf("%s\n","TEST FAIL :(");
		printf("%s%d\n","res1 = ",res1);
		printf("%s%d\n","res2 = ",res2);
	}
	return (0);
}*/