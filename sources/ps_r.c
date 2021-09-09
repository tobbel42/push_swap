/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:32:57 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/08 11:21:13 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//shifts all elements of the stack up by 1, the first becomes the last one.
//to print set mode to 1
*/
void	ps_r(t_head *stack, int mode)
{
	if (stack->len > 1)
	{
		stack->head = stack->head->next;
		if (mode == 1)
		{
			write(1, "r", 1);
			write(1, &(stack->name), 1);
			write(1, "\n", 1);
		}
	}
}
