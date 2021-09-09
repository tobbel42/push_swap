/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:52:57 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:57:03 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//sort stack consisting out of 3 elements in ascending order
*/
void	ps_solve_three(t_head *a)
{
	if (a->head->data < a->head->next->data)
	{
		if (a->head->next->data > a->head->prev->data)
		{
			ps_rr(a, 1);
			if (a->head->data > a->head->next->data)
				ps_swap(a, 1);
		}
	}
	else
	{
		if (a->head->next->data < a->head->prev->data)
		{
			if (a->head->data < a->head->prev->data)
				ps_swap(a, 1);
			else
				ps_r(a, 1);
		}
		else
		{
			ps_r(a, 1);
			ps_swap(a, 1);
		}
	}
}
