/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:21:13 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 13:45:17 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// convert a int to a string
char	*ft_itoa(int n)
{
	char		c[12];
	int			j;

		// check if the number its zero and return it
	if (n == 0)
		return (ft_strdup("0"));
		// check if the number its the INT_MIN and return it
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
		// clean c
	ft_bzero(c, 12);
		// check the length of the number
	j = ft_intlen(n) - 1;
		// check if the number its negative
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
	}
		// insert the numbers in the string
	while (n > 0)
	{
		c[j--] = '0' + (n % 10);
		n = n / 10;
	}
	return (ft_strdup(c));
}
