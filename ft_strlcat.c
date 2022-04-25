/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:19:01 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/07 15:42:43 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	int				k;
	char			*d;
	const char		*s;

	i = dstsize;
	d = dst;
	s = src;
	while (i-- != 0 && *d != '\0')
		d++;
	k = d - dst;
	i = dstsize - k;
	if (i == 0)
		return (k + ft_strlen(src));
	while (*s != '\0')
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (k + (s - src));
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int				k;
	char			*d;
	const char		*s;

	i = dstsize;
	d = dst;
	s = src;
		// este while recorre el destino verificando que es menor que dstsize
		// y moviendo el puntero a la utima posicion escrita
	while (i-- != 0 && *d != '\0')
		d++;
		// 'k' es la direfencia entre la posicion del puntero del anterior while
		// y el tamaño de destino si dstsize es menor que el tamaño de destino
		// a dstsize se le resta la diferencia 'k' para determinar la diferencia
		// y determinar la cantidad de posiciones
		// de source se van a poder concatenar
	k = d - dst;
	i = dstsize - k;
		// si 'i' es 0 no se concatena nada de source
		// y se devuelve la diferencia 'k' más el tamaño de source
	if (i == 0)
		return (k + ft_strlen(src));
		// este while recorre source y mientras 'i' sea distinto de 1
		// (al se unsigned nunca sera menor que 0
		// y si es 0 nunca entrará en este while)
	while (*s != '\0')
	{
		if (i != 1)
		{
			// copiará el dato de la posicion de source a la posicion destino
			// cuando 'i' sea 1 dejará de copiar contenido
			// y terminará de recorrer source calculando su tamaño
			*d++ = *s;
			i--;
		}
		s++;
	}
		// en la ultima posicion de destino
		// le añadimos el caracter nulo para determinar su final
	*d = '\0';
		// y devolvemos la diferencia 'k' más la diferencia 
		// entre el tamaño recorrido por el puntero y el tamaño de source
	return (k + (s - src));
}*/
