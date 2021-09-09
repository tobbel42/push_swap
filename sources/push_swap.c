/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:09:42 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:42:56 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//sorts the input stack in ascending order,
//and printing the commands used to stdout
*/
int	main(int argc, char **argv)
{
	t_head	*a;
	t_head	*b;

	a = NULL;
	if (argc > 2)
		a = ps_init(1, argc, argv);
	else if (argc == 2)
		a = ps_parse_str(argv[1]);
	if (!a)
		return (1);
	b = ps_new_stack('b');
	if (!b)
	{
		ps_del_stack(a);
		write(2, "Error\n", 6);
		return (1);
	}
	ps_sort_stack(a, b);
	return (2);
}
