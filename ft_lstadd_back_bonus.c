/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:33:14 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:51:27 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// añade un nuevo elemento a la ultima posicion
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*
#include "libft.h"
#include "lst_libft.h"

	// añade un nuevo elemento a la ultima posicion
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	// crreamos un "t_list" de intercambio
	t_list	*last;

	// comprobamos que la lista existe
	if (lst)
	{
		// y volvemos a comprobar si la lista tiene elementos
		if (*lst)
		{
			// llamamos a la funcion lstlast para que devuelva
			// el ultimo elemento de la lista
			// y asignamos el puntero a la variable de intercambio
			last = ft_lstlast(*lst);
			// y cambiamos el puntero "next" del elemento
			// para que apunte al nuevo elemento que añadimos
			last->next = new;
		}
		// si no tienen ningun elemento le creamos
		// añadiendo los datos pasados en "new"
		else
			*lst = new;
	}
}
*/