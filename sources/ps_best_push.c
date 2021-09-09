/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_best_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:27:07 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:53:07 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//returns the biggest of the input values
*/
int	ps_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

/*
//returns the smallest of the input values
*/
int	ps_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

/*
//counts the minimal number of moves required to move element at pos_a to pos_b
*/
int	ps_count_moves(int pos_a, int pos_b, int len_a, int len_b)
{
	int	rev_a;
	int	rev_b;

	rev_a = len_a - pos_a;
	rev_b = len_b - pos_b;
	return (ps_min(ps_min(ps_max(pos_a, pos_b), ps_max(rev_a, rev_b)),
			ps_min(pos_a + rev_b, pos_b + rev_b)));
}

/*
//returns the value of the element which can be pushed,
// with the lowest number of moves
*/
int	ps_best_push(t_head *a, t_head *b)
{
	int		move_count;
	int		min_count;
	int		value;
	int		i;
	t_elem	*node;

	i = 0;
	node = b->head;
	value = node->data;
	min_count = ps_count_moves(
			ps_find_insert(a, node->data), i, a->len, b->len);
	while (i < b->len)
	{
		move_count = ps_count_moves(
				ps_find_insert(a, node->data), i, a->len, b->len);
		if (move_count < min_count)
		{
			min_count = move_count;
			value = node->data;
		}
		node = node->next;
		i++;
	}
	return (value);
}
