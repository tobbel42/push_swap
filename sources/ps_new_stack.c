/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_new_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:38:44 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:35 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//creates a new stack_head, and sets its name and lenght
*/
t_head	*ps_new_stack(char name)
{
	t_head	*new_stack;

	new_stack = (t_head *)malloc(sizeof(t_head));
	if (!new_stack)
		return (NULL);
	new_stack->name = name;
	new_stack->len = 0;
	new_stack->head = NULL;
	return (new_stack);
}
