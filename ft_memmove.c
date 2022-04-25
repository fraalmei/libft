/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:00:25 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 12:42:22 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se copia "n" caracteres de "src" a "dst"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		*ld;
	unsigned const char	*ls;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		ld = d + (len - 1);
		ls = s + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}
/*
	// se copia "n" caracteres de "src" a "dst"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		*ld;
	unsigned const char	*ls;

		// comprobamos que "src" y "dst" existan
	if (s == NULL && d == NULL)
		return (NULL);
		// direccionamos los parametros a nuestras variables
		// para trabajarlos sin problemas
	d = dst;
	s = src;
		// comprobamos si destino es menor que source
	if (d < s)
			// si lo es, añadimos los caracteres de la misma posicion
			// de "s" a "d" y avanzamos posicion 
			// repetimos "len" veces
		while (len--)
			*d++ = *s++;
		// si destino es mayor o igual a source
	else
	{
			// apuntamos los punteros a la posicion "len" - 1
		ld = d + (len - 1);
		ls = s + (len - 1);
			// añadimos los caracteres de la misma posicion
			// de "s" a "d" y retrocedemos posicion 
			// repetimos "len" veces
		while (len--)
			*ld-- = *ls--;
	}
		// devolvemos destino
	return (dst);
}*/
