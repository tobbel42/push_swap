/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_del_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:21:54 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:12 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
/*
//frees all elements of the stack, then the stack_head
*/
void	ps_del_stack(t_head *stack)
{
	t_elem	*elem;

	elem = ps_cut_elem(stack);
	while (elem)
	{
		free(elem);
		elem = ps_cut_elem(stack);
	}
	free(stack);
}
