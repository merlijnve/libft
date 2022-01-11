/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intos.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboer <jboer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/04 10:44:05 by jboer         #+#    #+#                 */
/*   Updated: 2022/01/11 13:38:52 by merlijn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_intos(char *strn, int intlen, int i, int n)
{
	i = intlen + i;
	while (intlen > 0)
	{
		i--;
		strn[i] = (n % 10) + '0';
		n = n / 10;
		intlen--;
	}
	return (strn);
}
