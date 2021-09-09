/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cut_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:57:54 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:08 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//return the first element of the stack, closes the loop
//and sets the 2nd element as the new 1st
*/
t_elem	*ps_cut_elem(t_head *stack)
{
	t_elem	*prev;
	t_elem	*next;
	t_elem	*elem;

	if (!stack)
		return (NULL);
	if (!stack->head || !stack->len)
		return (NULL);
	elem = stack->head;
	if (stack->len == 1)
		stack->head = NULL;
	else if (stack->len > 1)
	{
		prev = elem->prev;
		next = elem->next;
		prev->next = next;
		next->prev = prev;
		stack->head = next;
	}	
	stack->len--;
	return (elem);
}
