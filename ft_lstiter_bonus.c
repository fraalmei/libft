/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:24:36 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:04:52 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// itera la lista y aplica la funcion "f" al contenido de cada elemento
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
#include "libft.h"
#include "lst_libft.h"

	// itera la lista y aplica la funcion "f" al contenido de cada elemento
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// comprobamos si existe la funcion
	if (!f)
		return ;
	// mientras exista la lista
	while (lst)
	{
		// llamamos a la funcion le damos como parametro
		// el contenido del elemento actual
		(*f)(lst->content);
		// pasamos al siguiente elemento
		lst = lst->next;
	}
}
*/