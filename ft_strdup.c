/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:29:23 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 14:42:28 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*strdup creará un espacio vacio con calloc
	lo suficientemente grande para copiar a "s1"
	y devolver un puntero al inicio de la copia*/
char	*ft_strdup(const char *s1)
{
	char		*ptr;

	ptr = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return ((char *)ptr);
}
/*
char	*ft_strdup(const char *s1)
{
	char		*ptr;

		//reservamos memoria igual al tamaño de "s1" + 1
	ptr = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
		// copiamos el contenido de "s1" en "ptr" y lo devolvemos
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return ((char *)ptr);
}
*/