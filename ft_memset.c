/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:24:44 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/11 14:33:35 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// memset rellena "len" espacios de "dest" con caracteres "c"
void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			j;
	unsigned char	*ptr;

	j = -1;
	ptr = dest;
	while (++j < len)
		ptr[j] = c;
	return (dest);
}
/*
	// memset rellena "len" espacios de "dest" con caracteres "c"
void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			j;
	unsigned char	*ptr;

	j = -1;
	ptr = dest;
		// siempre que j ea menor que "len"
	while (++j < len)
			// rellenamos la posicion de ptr con "c"
		ptr[j] = c;
		// devolvemos destino
	return (dest);
}
*/