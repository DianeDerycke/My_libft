/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:02:44 by dideryck          #+#    #+#             */
/*   Updated: 2017/11/18 21:39:12 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	if (*s == '\0')
		return (1);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		words++;
		while (s[i] == c && s[i])
			i++;
	}
	return (words);
}

static int		ft_size_word(char const *s, int index, char c)
{
	int		size;

	size = 0;
	while (s[index] != c && s[index])
	{
		index++;
		size++;
	}
	return (size);
}

static char		**ft_fill_table(char **tab, char const *s, char c, int i)
{
	int		n;

	n = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		tab[n] = (char*)malloc(sizeof(char) * (ft_size_word(s, i, c)));
		if (tab[n] == NULL)
			return (NULL);
		tab[n] = ft_strsub(s, i, ft_size_word(s, i, c));
		while (s[i] != c && s[i])
			i++;
		n++;
	}
	tab[n] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;

	tab = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	return (ft_fill_table(tab, s, c, i));
}
