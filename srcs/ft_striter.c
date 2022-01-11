/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <mvan-eng@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 20:26:54 by mvan-eng      #+#    #+#                 */
/*   Updated: 2022/01/11 13:35:07 by merlijn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
