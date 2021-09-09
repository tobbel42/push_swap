/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:02:27 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 16:17:27 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//checks if stack a is sorted and stack b is empty, 1 if yes, 0 if not
*/
int	ps_check_stack(t_head *a, t_head *b)
{
	int		i;
	t_elem	*node;

	i = 1;
	node = a->head->next;
	while (i < a->len)
	{
		if (node->prev->data > node->data)
			return (0);
		node = node->next;
		i++;
	}
	if (b->len != 0)
		return (0);
	return (1);
}
