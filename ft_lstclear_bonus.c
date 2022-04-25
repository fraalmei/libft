/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:18:04 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:04:49 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// elimina y libera cada uno de los elementos de una lista
	// terminando poniendo el puntero a la lista NULL
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
#include "libft.h"
#include "lst_libft.h"

	// elimina y libera cada uno de los elementos de una lista
	// terminando poniendo el puntero a la lista NULL
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	// creamos un "t_list" de intercambio
	t_list	*tmp;

	// comprobamos que existan "del" y la lista
	// y que la lista tenga elementos
	if (del == NULL || !lst || !*lst)
		return ;
	//misentras exista la lista y tenga elementos
	while (lst && *lst)
	{
		// guardamos el puntero al siguiente elemento
		tmp = (*lst)->next;
		// y borramos el elemento actual
		ft_lstdelone(*lst, del);
		// y asignamos el puntero guardado para asignarlo como actual
		*lst = tmp;
	}
}
*/