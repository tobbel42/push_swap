/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 12:29:39 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:41 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//pushes the first elemt of the source stack onto the destination stack
//to print set mode to 1
*/
void	ps_push(t_head *dest, t_head *src, int mode)
{
	ps_insert_elem(dest, ps_cut_elem(src));
	if (mode == 1)
	{
		write(1, "p", 1);
		write(1, &(dest->name), 1);
		write(1, "\n", 1);
	}
}
