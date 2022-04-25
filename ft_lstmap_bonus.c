/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:22:41 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 12:30:42 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// itera la lista y aplica la funcion "f" al contenido de cada elemento
	// la aplicacion correcta de la funcon "f" sobre cada elemento
	// genera una nueva lista con estos
	// en caso de necesitarse se utilizara la funcion "del"
	// para eliminar contenido de un elemento
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	new_elem = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_elem->next = ft_lstnew((*f)(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_elem = new_elem->next;
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include "libft.h"
#include "lst_libft.h"

	// itera la lista y aplica la funcion "f" al contenido de cada elemento
	// la aplicacion correcta de la funcon "f" sobre cada elemento
	// genera una nueva lista con estos
	// en caso de necesitarse se utilizara la funcion "del"
	// para eliminar contenido de un elemento
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// creamos dos punteros para crear una nueva lista y nuevos elementos
	t_list	*new_lst;
	t_list	*new_elem;

		// comprobamos si existe la lista
	if (!lst)
		return (NULL);
		// creamos un nuevo elemento,
		// le añadimos el contenido del primero elemento de la lista
		// y lo añadimos a la nueva lista
	new_lst = ft_lstnew((*f)(lst->content));
		// comprobamos quue se ha creado bien el nuevo elemento
	if (!new_lst)
			// si no cerramos la funcion devolviendo NULL
		return (NULL);
		// apuntamos "new_elem" a "new_lst"
	new_elem = new_lst;
		// pasamos al siguiente elemento de la lista pasada por parametro
	lst = lst->next;
	while (lst)
	{
			// creamos un nuevo elemento
			// y asignamos el puntero del nuevo elemento
			// al next del elemento de la lista nueva
		new_elem->next = ft_lstnew((*f)(lst->content));
			// comprobamos si la creacion del nuevo elemento falla
		if (!new_elem)
		{
				// si falla lo eliminamos y salimos
			ft_lstclear(&new_lst, del);
			return (0);
		}
			// si no falla pasamos al siguiente elemento de la lista creada
		new_elem = new_elem->next;
			// y pasamos al siguiente elemento de la lista parametro
		lst = lst->next;
	}
	return (new_lst);
}
*/