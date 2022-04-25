/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:57:42 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/20 18:21:02 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// localiza la ultima ocurrencia de "c" sobre "s"
	// y delvuelve un puntero a esa posicion
char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			l = ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (l);
}
/*
	// localiza la ultima ocurrencia de "c" sobre "s"
	// y delvuelve un puntero a esa posicion
char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = 0;
		// este while recorre 's'
		// if comprueba si el dato de la posicion de 's'
		// si coincide guarda la posicion en 'l'
	while (*s)
	{
		if (*s == c)
			l = ((char *)s);
		s++;
	}
		// se comprueba tambien la ultima posicion
		// (suele ser '\0')
	if (*s == c)
		return ((char *)s);
		// se devulve la posision guardada en 'l'
		// si no hay coincidencia se devuelve 0
		// ya que 'l' no ha cambia de 0
	return (l);
}
*/