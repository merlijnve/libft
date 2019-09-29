/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_to_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <mvan-eng@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/11 16:33:56 by mvan-eng       #+#    #+#                */
/*   Updated: 2019/09/11 16:42:13 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_to_uppercase(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
}
