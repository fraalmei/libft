/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:47:51 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/11 09:35:35 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// count the element of the list
int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
		// travel "lst" while exists
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
