/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:14:34 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 15:07:08 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s;
	unsigned int	i;

	if (set == NULL || s1 == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	s = ft_substr(s1, 0, i + 1);
	return ((char *)s);
}
/*
	// reserva memoria y devuelve una copia de "s1"
	// con los caracteres de "set" eliminados
	// tanto al principio como al final del string
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*s;
	unsigned int	i;

		//comprobamos que "set" y "s1" existan
	if (set == NULL || s1 == NULL)
		return (NULL);
		// comparamos el caracter de la posicion actual de "s1" con "set"
		// si hay coincidencia avanzamos el puntero de "s1"
		// hasta que no tenga coincidencias
	while (*s1 && ft_strchr(set, *s1))
		s1++; 
		// guardamos la longitud de "s1"
	i = ft_strlen(s1);
		// comparamos el caracter de la posicion final de "s1" con "set"
		// si hay coincidencia decrementamos "i"
		// hasta que no tenga coincidencias
	while (i && ft_strchr(set, s1[i]))
		i--;
		// creamos el substr que se encuentra entre
		// el puntero que enviamos de "s1" y la posicion final que es "i"
	s = ft_substr(s1, 0, i + 1);
	return ((char *)s);
}
*/