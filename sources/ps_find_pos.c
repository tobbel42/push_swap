/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_find_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:21:07 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 17:27:51 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//returns the position of the element in the stack with given value
//on error -1 is returned
*/
int	ps_find_pos(t_head *stack, int value)
{
	int		pos;
	t_elem	*node;

	node = stack->head;
	pos = 0;
	while (pos < stack->len)
	{
		if (node->data == value)
			return (pos);
		node = node->next;
		pos++;
	}
	return (-1);
}
