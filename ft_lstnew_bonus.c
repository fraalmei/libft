/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:14:41 by fraalmei          #+#    #+#             */
/*   Updated: 2022/08/11 09:33:46 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// it creates a new struct list and return a pointer to it
	// allocating memmory with malloc and initializing the content
t_list	*ft_lstnew(void *content)
{
	t_list	*s;

		// allocate memory for a "t_list"
	s = (t_list *)malloc(sizeof(*s));
	if (s == NULL)
		return (NULL);
		// insert "content" in the content variable of s
	s->content = content;
	s->next = NULL;
	return (s);
}
