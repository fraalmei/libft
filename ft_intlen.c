/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:34:33 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/11 13:11:54 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// count the digits of a int
size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
		// check if it's negative
	if (n < 0)
		i++;
		// split the number by ten until it is zero
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
