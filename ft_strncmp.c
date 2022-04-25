/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:48:05 by fraalmei          #+#    #+#             */
/*   Updated: 2022/03/31 15:00:14 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// compara lexicologicamente "s1" y "s2", "n" caracteres
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	if (n == 0)
		return (0);
	while (j < n - 1 && s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
		j++;
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
/*
	// compara lexicologicamente "s1" y "s2", "n" caracteres
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	j;

	j = 0;
		// se comprueba que 'n' sea mayor que 0
		// sino devuelve 0
	if (n == 0)
		return (0);
		// este while recorre las posiciones de los dos strings
		// mientras 'j' sea menor que 'n',
		// los datos de los strings en la misma posicion sean iguales,
		// y ninguno de los strings tenga un dato nulo
		// una vez encuentra que los datos son distintos
		// o se termine de recorrer 'n' posiciones
		// o algun string se acabe
	while (j < n - 1 && s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
		j++;
		// comparamos los datos de los strings en la ultima poscion recorrida
		// y la diferencia entre los dos datos se devuelve
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
*/