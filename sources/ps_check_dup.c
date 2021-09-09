/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:13:49 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 16:17:05 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//checks if the number is already on the stack, 0 if it is, 1 if not.
*/
int	ps_check_dup(t_head *stack, int nbr)
{
	int		i;
	t_elem	*node;

	i = 0;
	node = stack->head;
	while (i < stack->len)
	{
		if (node->data == nbr)
			return (0);
		node = node->next;
		i++;
	}
	return (1);
}
