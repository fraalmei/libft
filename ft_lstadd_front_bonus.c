/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:26:53 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/11 09:32:08 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// add a new element "t_list" to a list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
		//check if the list exist
	if (lst)
	{
			//check if the pointer to the list element exist
		if (*lst)
				// if exists, the variable next of "new"
				// is asigned with the pointer of the list
			new->next = *lst;
			// if no element compose the list
			// asign the pointer of "new" to the list
		*lst = new;
	}
}
