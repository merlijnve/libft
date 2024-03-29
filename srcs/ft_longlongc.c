/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_longlongc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboer <jboer@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/29 18:37:48 by jboer         #+#    #+#                 */
/*   Updated: 2022/01/11 13:29:31 by merlijn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longlongc(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
