/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:17:32 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 14:48:21 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// se cuenta la cantidad de caracteres que tiene "c"
size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
/*
	// se cuenta la cantidad de caracteres que tiene "c"
size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	// este while recorre 'c' 
	// y con el digito de control cuenta su tamaño devolviendolo
	while (c[i] != '\0')
		i++;
	return (i);
}
*/