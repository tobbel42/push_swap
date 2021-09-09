/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:54:45 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:57:16 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//swaps the first and the secound element of the stack
//to print set mode to 1
*/
void	ps_swap(t_head *stack, int mode)
{
	t_elem	*elem;

	elem = ps_cut_elem(stack);
	ps_r(stack, 0);
	ps_insert_elem(stack, elem);
	ps_rr(stack, 0);
	if (mode == 1)
	{
		write(1, "s", 1);
		write(1, &(stack->name), 1);
		write(1, "\n", 1);
	}
}
