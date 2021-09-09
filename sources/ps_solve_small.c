/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_small.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:59:23 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:50:17 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//sorts the given stack, optimised for small stacks
*/
void	ps_solve_small(t_head *a, t_head *b)
{
	while (a->len > 3)
		ps_push(b, a, 1);
	ps_solve_three(a);
	while (b->len)
	{
		ps_rotate_stack(a, ps_find_insert(a, b->head->data));
		ps_push(a, b, 1);
	}
	ps_rotate_stack(a, ps_find_min(a));
}
