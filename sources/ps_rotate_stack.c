/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:54:02 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:46 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//rotates the stack, so that the given position is on top
*/
void	ps_rotate_stack(t_head *stack, int pos)
{
	int	b_len;
	int	f_len;

	b_len = (int)stack->len - pos;
	f_len = pos;
	if (b_len < f_len)
	{
		while (b_len > 0)
		{
			ps_rr(stack, 1);
			b_len--;
		}
	}
	else
	{
		while (f_len > 0)
		{
			ps_r(stack, 1);
			f_len--;
		}
	}
}
