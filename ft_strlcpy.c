/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:38:03 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 14:48:19 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// copia "src"y concatena a "dst"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			j;
	char			*d;
	const char		*s;

	j = 0;
	d = dst;
	s = src;
	if (dstsize < 1)
		return (ft_strlen(s));
	while (s[j] && j < dstsize - 1)
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (ft_strlen(s));
}
/*
	// copia "src"y concatena a "dst"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	char			*d;
	const char		*s;

	j = 0;
	d = dst;
	s = src;
	// si dstsize es 0 devuelve el tamaño de source
	if (dstsize < 1)
		return (ft_strlen(s));
	// este while recorre source
	// mientras no se encuentrae con posicion nula
	// y el digito de control sea menor que dstsize menos 1
	// copiando los datos de source en la misma posicion en destino
	while (s[j] && j < dstsize - 1)
	{
		d[j] = s[j];
		j++;
	}
	// en la ultima posicion de destino cerramos el string con un nulo
	// y devolvemos el tamaño de soruce
	d[j] = '\0';
	return (ft_strlen(s));
}*/
