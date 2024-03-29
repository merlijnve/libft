/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lncount.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <mvan-eng@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 16:29:13 by mvan-eng      #+#    #+#                 */
/*   Updated: 2022/01/11 13:37:54 by merlijn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_lncount(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
