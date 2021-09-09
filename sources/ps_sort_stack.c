/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:23:32 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:49:55 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ps_sort_stack(t_head *a, t_head *b)
{
	if (ps_check_stack(a, b) == 0)
	{
		if (a->len == 2)
			ps_solve_two(a);
		else if (a->len == 3)
			ps_solve_three(a);
		else if (a->len <= 10)
			ps_solve_small(a, b);
		else
			ps_solve_big(a, b);
	}
	ps_del_stack(a);
	ps_del_stack(b);
}
