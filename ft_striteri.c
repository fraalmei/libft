/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:08:59 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 14:44:47 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
		(*f)(i++, s++);
}
/*
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
		// comprobamos si existen "s" y "f"
	if (!s || !f)
		return ;
		// recorremos "s"
	while (*s)
			// y ejecutamos "f" en cada posicion de "s"
			// dando como parametro "i" y el contenido de la posicion de "s"
		(*f)(i++, s++);
}
*/