/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:21:21 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/21 14:49:54 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se reserva espacio para un nuevo string
	// basado en  la union de 2 parametros
char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	ft_strlcat(s, s1, ft_strlen(s1) + 1);
	ft_strlcat(s, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return ((char *) s);
}
/*
	// se reserva espacio para un nuevo string
	// basado en  la union de 2 parametros
char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*s;

		// comprobamos que los strings exsistan
	if (s1 == NULL || s2 == NULL)
		return (NULL);
		// reservamos espacio
	s = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
		// y comprobamos si ha salido bien la reserva
	if (!s)
		return (NULL);
		// concatenamos los valores
		// primero uno
	ft_strlcat(s, s1, ft_strlen(s1) + 1);
		// y despues otro en la prosicion de termino del primero
	ft_strlcat(s, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return ((char *) s);
}
*/