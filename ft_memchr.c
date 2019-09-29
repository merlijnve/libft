/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <mvan-eng@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 17:03:59 by mvan-eng       #+#    #+#                */
/*   Updated: 2019/01/30 20:11:02 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;
	unsigned char	d;

	d = (unsigned char)c;
	res = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (res[i] == d)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
