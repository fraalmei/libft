/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:11:21 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:04:51 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// toma como parametro un elemento de una lista
	// y libera la memoria del contenido utilizando la funcion "del"
	// y liberando el elemento con "free"
	// la memoria del siguiente elemento no debe liberarse
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
#include "libft.h"
#include "lst_libft.h"

	// toma como parametro un elemento de una lista
	// y libera la memoria del contenido utilizando la funcion "del"
	// y liberando el elemento con "free"
	// la memoria del siguiente elemento no debe liberarse
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// comprobamos que "del" exista
	if (!del)
		return ;
	// comprobamos si existe la lista
	if (lst)
	{
		// llamamos a la funcion y le damos por parametro
		// el contenido en la posicion de la lista
		// pst ((()))
		(*del)(lst->content);
		// liberamos el espacio reservado para el elemento de la lista
		free(lst);
	}
}*/
