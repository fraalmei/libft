/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:27:38 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/20 18:05:02 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*calloc reserva memoria para cualquier tipo de dato
	(el tamaño reservado dependera del dato que se quiera guardar, 
	pero no requiere que se guarde un tipo concreto),
	se reservara "count" espacios de memoria de tamaño "size",
	despues ese espacio reservado se llenará de '\0' 
	para verificar que no tenga ningun dato,
	devolviendo un puntero al inicio de la reserva de memoria*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = (void *)malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}

/*void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

		// llamamos a malloc y le damos "count" espacios
		// de "size" tamaño para que reserve espacio
		// (se recomienda reservar un espacio de más)
	s = (void *)malloc(count * size);
		// y se comprueba que la reserva se ha realizado correctamente
	if (!s)
		return (NULL);
		// y rellenamos de '\0' el tamaño reservado
	ft_bzero(s, (count * size));
	return (s);
}
*/