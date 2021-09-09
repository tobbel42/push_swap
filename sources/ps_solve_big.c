/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:37:16 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:48:37 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//sorts the stack, optimised for big stacks
*/
void	ps_solve_big(t_head *a, t_head *b)
{
	int		value;

	while (a->len > 3)
		ps_push(b, a, 1);
	ps_solve_three(a);
	while (b->len)
	{
		value = ps_best_push(a, b);
		ps_make_push(a, b, value);
	}
	ps_rotate_stack(a, ps_find_min(a));
}
