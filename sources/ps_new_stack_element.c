/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_new_stack_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:58:52 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:31 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//creates a new stack element with the given integer as data
*/
t_elem	*ps_new_stack_element(int nbr)
{
	t_elem	*new_elem;

	new_elem = (t_elem *)malloc(sizeof(t_elem));
	if (!new_elem)
		return (NULL);
	new_elem->data = nbr;
	new_elem->next = NULL;
	new_elem->prev = NULL;
	return (new_elem);
}
