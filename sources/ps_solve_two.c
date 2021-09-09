/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_solve_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:08:30 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:57:07 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//sorts a stack with 2 elements in ascending order
*/
void	ps_solve_two(t_head *a)
{
	if (a->head->data > a->head->next->data)
		ps_r(a, 1);
}
