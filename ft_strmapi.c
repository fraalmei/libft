/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:00:14 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 14:48:24 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// aplica la funcion  "f"  a cada caracter del string "s"
	// para crear un nuevo string, resultado de aplicar sucesivas veces "f"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	c = ft_strdup(s);
	if (!c)
		return (NULL);
	while (c[i])
	{
		c[i] = (*f)(i, c[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
	// aplica la funcion  "f"  a cada caracter del string "s"
	// para crear un nuevo string, resultado de aplicar sucesivas veces "f"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

		//comprobamos que "s" y "f" existen
	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
		// se crea una copia de "s"
	c = ft_strdup(s);
		// recorremos todas las posiciones de "c"
	while (c[i])
	{
			// y aplicamos a cada caracter la funcion
			// dando como parametro el propio caracter de la posicion
		c[i] = (*f)(i, c[i]);
		i++;
	}
		// y en la ultima posicion añadimos un NULL
	c[i] = '\0';
		// devolviendo puntero a la posicion de "c"
	return (c);
}*/
