/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:47:51 by fraalmei          #+#    #+#             */
/*   Updated: 2022/04/05 10:29:41 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// cuenta el numero de elementos de una lista
int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include "libft.h"
#include "lst_libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	// recorremos "lst" mientras exista
	while (lst)
	{
		// nos movemos por los elmentos de la lista hasta el ultimmo elemento
		// que en su variable "next" tiene NULL al no apuntar a ningun otro elemento
		lst = lst->next;
		i++;
	}
	// devolviendo las veces que cambiamos de elemento
	return (i);
}
*/