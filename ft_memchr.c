/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:41:06 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/18 17:32:27 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// localiza la primera coincidencia de "c" en "s"
	// durante "n" caracteres
	// devolviendo esta posicion
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*t;

	t = s;
	while (n--)
		if (*t++ == (char)c)
			return ((char *)--t);
	return (NULL);
}
/*
	// localiza la primera coincidencia de "c" en "s"
	// durante "n" caracteres
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*t;

	i = 0;
	t = s;
		// mientras "i" sea menor que "n"
		// auque pasemos el terminated NULL
		// seguirá comparando por si el char que se busca
		// es el propio NULL
	while (i++ < n)
			// comparamos cada posicion con "d"
		if (*t == d)
				// si hay coincidencia se devulve esa posicion
			return ((char *)--t);
	return (NULL);
}*/
