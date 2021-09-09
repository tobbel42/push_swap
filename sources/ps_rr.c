/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:52:15 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:50 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//shifts all elements of the stack down by 1, the last becomes the first one
//to print set mode to 1
*/
void	ps_rr(t_head *stack, int mode)
{
	if (stack->len > 1)
	{
		stack->head = stack->head->prev;
		if (mode == 1)
		{
			write(1, "rr", 2);
			write(1, &(stack->name), 1);
			write(1, "\n", 1);
		}
	}
}
