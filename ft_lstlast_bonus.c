/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:52:07 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:04:54 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// devuelvve el ultimo elemento de la lista
t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
#include "libft.h"
#include "lst_libft.h"

	// devuelvve el ultimo elemento de la lista
t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	// recorremos "lst" mientras exista
	while (lst)
	{
		// comprobamos que si el elemento actual 
		// no contiene puntero en su "next"
		if (!lst->next)
			// si no tiene puntero a ningun elemento
			// significa que es el ultimo
			// y devolvemos el puntero a este elemento
			return (lst);
		// "next" si tiene puntero a otro elemento 
		// lo asignamos a la lista
		lst = lst->next;
	}
	// la funcion no deberia llegar aquí
	return (lst);
}
*/