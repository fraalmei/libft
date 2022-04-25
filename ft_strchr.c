/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:54:18 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/20 18:21:15 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// localiza la primera ocurrencia de "c" sobre "s"
	// y devuelve un puntero a esa posicion
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
	// localiza la primera ocurrencia de "c" sobre "s"
	// y devuelve un puntero a esa posicion
char	*ft_strchr(const char *s, int c)
{
	// este while recorre 's'
	// if comprueba si el dato de la posicion de 's'
	// si coincide devuelve la posicion
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	// se comprueba tambien la ultima posicion
	// (suele ser '\0')
	if (*s == c)
		return ((char *)s);
	// si no hay coincidencia se devuelve 0
	return (0);
}
*/