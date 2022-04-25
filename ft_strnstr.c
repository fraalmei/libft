/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:33:41 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/04 13:22:05 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// localiza la primera coincidencia de "needle" en haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(needle);
	if (i == 0 || haystack == needle)
		return ((char *)haystack);
	j = 0;
	while (haystack[j] != '\0' && j < n)
	{
		k = 0;
		while (haystack[j + k] != '\0' && needle[k] != '\0'
			&& haystack[j + k] == needle[k] && j + k < n)
			k++;
		if (k == i)
			return ((char *)haystack + j);
		j++;
	}
	return (0);
}
/*
	// localiza la primera coincidencia de "needle" en haystack
	//  no buscando mas de "n"
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(needle);
	if (i == 0 || haystack == needle)
		return ((char *)haystack);
		// obtenemos la longitud de needle
	j = 0;
		// mientras haystack tenga elementos y no se recorra mas de "n"
	while (haystack[j] != '\0' && j < n)
	{
		k = 0;
			// cuando se encuentra con la primera coincidencia
			// mira los siguientes "ft_strlen(needle)" caracteres
			// de haystack y needle para comprobar si coinciden 
		while (haystack[j + k] != '\0' && needle[k] != '\0'
			&& haystack[j + k] == needle[k] && j + k < n)
				// comprueba si coninciden en el primer caracter
				// incrementamos "k" para no modificar el recorrido principal
			k++;
			// si se han encontrado todas las coincidencias
			// "k" debe se igual a "i" (ft_strlen(needle))
		if (k == i)
				// se devuelve la posicion
				// donde se encontro la primera coincidencia
			return ((char *)haystack + j);
			// si no hay coincidencias se incrementa el recorrido principal
		j++;
	}
	return (0);
}*/
