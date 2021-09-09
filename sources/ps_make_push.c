/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_make_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:48:15 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:55:31 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	bw_push(t_head *a, t_head *b, int pos_a, int pos_b)
{
	while (pos_a && pos_b)
	{
		ps_rr(a, 0);
		ps_rr(b, 0);
		ft_putendl_fd("rrr", 1);
		pos_a--;
		pos_b--;
	}
	while (pos_b)
	{
		ps_rr(b, 1);
		pos_b--;
	}
	while (pos_a)
	{
		ps_rr(a, 1);
		pos_a--;
	}
}

static void	fw_push(t_head *a, t_head *b, int pos_a, int pos_b)
{
	while (pos_a && pos_b)
	{
		ps_r(a, 0);
		ps_r(b, 0);
		ft_putendl_fd("rr", 1);
		pos_a--;
		pos_b--;
	}
	while (pos_b)
	{
		ps_r(b, 1);
		pos_b--;
	}
	while (pos_a)
	{
		ps_r(a, 1);
		pos_a--;
	}
}

static void	fb_push(t_head *a, t_head *b, int pos_a, int pos_b)
{
	while (pos_b)
	{
		ps_rr(b, 1);
		pos_b--;
	}
	while (pos_a)
	{
		ps_r(a, 1);
		pos_a--;
	}
}

static void	bf_push(t_head *a, t_head *b, int pos_a, int pos_b)
{
	while (pos_b)
	{
		ps_r(b, 1);
		pos_b--;
	}
	while (pos_a)
	{
		ps_rr(a, 1);
		pos_a--;
	}
}

/*
//executes the best push by rotating the stacks, then pushing the element
*/
void	ps_make_push(t_head *a, t_head *b, int value)
{
	int	pos_a;
	int	pos_b;
	int	rev_a;
	int	rev_b;
	int	count;

	pos_b = ps_find_pos(b, value);
	pos_a = ps_find_insert(a, value);
	rev_a = a->len - pos_a;
	rev_b = b->len - pos_b;
	count = ps_count_moves(pos_a, pos_b, a->len, b->len);
	if (ps_max(pos_a, pos_b) == count)
		fw_push(a, b, pos_a, pos_b);
	else if (ps_max(rev_a, rev_b) == count)
		bw_push(a, b, rev_a, rev_b);
	else if (pos_a + rev_b == count)
		fb_push(a, b, pos_a, rev_b);
	else if (rev_a + pos_b == count)
		bf_push(a, b, rev_a, pos_b);
	else
		fw_push(a, b, pos_a, pos_b);
	ps_push(a, b, 1);
}
