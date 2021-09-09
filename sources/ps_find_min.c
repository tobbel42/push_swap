/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:08:25 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 16:19:19 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//returns the position of the smallest element of the stack
*/
int	ps_find_min(t_head *stack)
{
	int		i;
	int		min;
	int		min_pos;
	t_elem	*node;

	min = stack->head->data;
	node = stack->head;
	i = 0;
	min_pos = 0;
	while (i < stack->len)
	{
		if (node->data < min)
		{
			min = node->data;
			min_pos = i;
		}
		node = node->next;
		i++;
	}
	return (min_pos);
}
