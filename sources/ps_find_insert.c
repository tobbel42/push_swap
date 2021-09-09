/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_find_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:30:06 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 16:18:11 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//finds the place where the first element of src has to be placed in dest
*/
int	ps_find_insert(t_head *dest, int n)
{
	t_elem	*node;
	int		i;

	i = 0;
	node = dest->head;
	while (i < dest->len)
	{
		if (node->data < n && node->next->data > n)
			return (i + 1);
		node = node->next;
		i++;
	}
	return (ps_find_min(dest));
}
