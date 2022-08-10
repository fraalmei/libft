/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:39:18 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/10 13:46:17 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;

	if (!cmp || !*begin_list || !data_ref)
		return ;
	tmp = *begin_list;
	if ((*cmp)(tmp->content, data_ref) == 0)
	{
		*begin_list = tmp->next;
		free (tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	tmp = *begin_list;
	ft_list_remove_if(tmp->next, data_ref, cmp);
}

void	ft_list(t_list **list, t_list *other_list)
{
	int		i;
	t_list	*l;

	i = 0;
	if (!list)
		return ;
	while (*list)
	{
		l = *list;
		if (l->content == other_list->content)
			i++;
		*list = l->next;
	}
}
