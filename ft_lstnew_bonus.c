/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:14:41 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:43:44 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*se reserva con malloc y se devuelve un puntero al elemento nuevo,
	se iniciaiza con el valor de "content" y la variable next
	se inicializa a NULL*/
t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = (t_list *)malloc(sizeof(*s));
	if (s == NULL)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}
/*
#include "libft.h"
#include "lst_libft.h"

	// se reserva con malloc y se devuelve un puntero al elemento nuevo,
	// se iniciaiza con el valor de "content" y la variable next
	// se inicializa a NULL
t_list	*ft_lstnew(void *content)
{
		// creamos un puntero tipo "t_list"
	t_list	*s;

		// reservamos memoria para del tamaño "t_list" 
	s = (t_list *)malloc(sizeof(*s));
		// se comprueba que la reserva sea correcta
	if (s == NULL)
		return (NULL);
		// asignamos "content" a la variable "content" de "s" 
	s->content = content;
		// asignamos a "next" el nombre NULL
		// para indicar que no tiene ningun elemento despues
		// (ya que aqui no asinamos otro elemento a la lista)
	s->next = NULL;
		// devolvemos s
	return (s);
}
*/
