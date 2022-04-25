/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:49:57 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 11:24:02 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se copia "n" caracteres de "src" a "dst"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
	// se copia "n" caracteres de "src" a "dst"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

		// se comprueba que "s" y "d" existen
	if (s == NULL && d == NULL)
		return (NULL);
	d = dst;
	s = src;
		// "n" veces
	while (n--)
			// se copia los caracteres de "s" a "d"
		*d++ = *s++;
		// devolviendo "dst"
	return (dst);
}
*/