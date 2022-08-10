/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:40:48 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 13:18:34 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// convert a char string to a int
int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	l;

	i = 0;
	l = 1;
	k = 0;
		// checking for a no printable chars
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
		// checking simbols
	if (str[i] == '-' || str[i] == '+')
			// if its a '-' save a -1
		if (str[i++] == '-')
			l = -1;
		// if the next chars are digits we create a int until stop appearing
	while (str[i] >= '0' && str[i] <= '9')
		k = (str[i++] - '0') + (k * 10);
		// return the number multiplied by the simbol saved before
	return (k * l);
}
