/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:26:53 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:04:47 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// añade un nuevo elemento "t_list" a una lista
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*
#include "libft.h"
#include "lst_libft.h"

	// añade un nuevo elemento "t_list" a una lista
	// se
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// se compruebla si existe la lista
	if (lst)
	{
		// se comprueba si el puntero a la lista es correcto
		if (*lst)
			// se asigna al next de la lista que queremos poner la primera
			// el puntero del inicio de la lista 
			// (ya que t_list de inicio de lista sera el segundo)
			new->next = *lst;
		// el puntero de inicio de lista se lo asignamos al elemento nuevo
		*lst = new;
	}
}
*/