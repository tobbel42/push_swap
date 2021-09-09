/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_insert_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:44:49 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:27 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//inserts the given element at the beginning of the stack
*/
void	ps_insert_elem(t_head *stack, t_elem *elem)
{
	t_elem	*next;
	t_elem	*prev;

	if (!stack || !elem)
		return ;
	if (stack->len == 0)
	{
		stack->head = elem;
		elem->next = elem;
		elem->prev = elem;
	}
	else
	{
		next = stack->head;
		prev = next->prev;
		elem->prev = prev;
		elem->next = next;
		stack->head = elem;
		next->prev = elem;
		prev->next = elem;
	}	
	stack->len++;
}
