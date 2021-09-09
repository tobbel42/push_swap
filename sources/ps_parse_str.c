/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parse_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:20:59 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:38 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//parses the inputstring,then initializes the stack,
//returns pointer on success, NULL on Error
*/
t_head	*ps_parse_str(char *str)
{
	int		i;
	char	**list;
	t_head	*stack;

	list = ft_split(str, ' ');
	if (!list)
	{
		write (2, "Error\n", 6);
		return (NULL);
	}
	i = 0;
	while (list[i] != NULL)
		i++;
	stack = ps_init(0, i, list);
	i = 0;
	while (list[i] != NULL)
	{
		free(list[i]);
		i++;
	}
	free (list);
	return (stack);
}
