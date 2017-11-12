/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 03:09:46 by DERYCKE           #+#    #+#             */
/*   Updated: 2017/11/12 19:31:30 by dideryck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strstr(const char *big, const char *little);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strcmp(const char* s1, const char *s2);
#endif