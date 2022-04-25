/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:00:38 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/04 18:47:43 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

	if (!s)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	c = ft_calloc(sizeof(char), len + 1);
	if (c != NULL)
	{
		if (start > ft_strlen(s))
			return ((char *)c);
		return (ft_memcpy(c, s + start, len));
	}
	return (NULL);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

		// se comprueba que "s" exista
	if (!s)
		return (NULL);
		// se comprueba si la distancia sobrante
		// desde el start y el final del string
		// es menor que "len"
		// esto es por si "len" es mayor que el espacio sobrante
		// no se reserve espacio innecesario
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
		// se reserva memoria
	c = ft_calloc(sizeof(char), len + 1);
		// se comprueba si ha salido bien la reserva
	if (c != NULL)
	{
			// si ha salido bien entramos al if
			// y comprobamos en el siguiente
			// si la posicion "start" es mayor 
			// al tamaño de "s"
			//esto es por si "start" esta fuera del tamaño del string
		if (start > ft_strlen(s))
				// retornando un "c" vacio
			return ((char *)c);
			// en caso contrario copiamos el contenido requerido de "s"
		return (ft_memcpy(c, s + start, len));
	}
	return (NULL);
}*/
