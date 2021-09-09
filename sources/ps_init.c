/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:26:55 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 13:56:24 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
//checks if the input string is an integer 
*/
static int	nbr_check(int nbr, char *arg)
{
	int		ret_val;
	char	*nbr_str;

	nbr_str = ft_itoa(nbr);
	if (!nbr_str)
		return (0);
	if (ft_strncmp(nbr_str, arg, ft_strlen(arg)))
		ret_val = 0;
	else
		ret_val = 1;
	free (nbr_str);
	return (ret_val);
}

/*
//pushes all given numberss onto the stack, ERROR on invalid values
*/
t_head	*ps_init(int start, int end, char **list)
{
	t_head	*stack;
	int		nbr;

	stack = ps_new_stack('a');
	while (start < end)
	{
		nbr = ft_atoi(list[start]);
		if (nbr_check(nbr, list[start]) && ps_check_dup(stack, nbr))
		{
			ps_insert_elem(stack, ps_new_stack_element(nbr));
			ps_r(stack, 0);
		}
		else
		{
			ps_del_stack(stack);
			write(2, "Error\n", 6);
			return (NULL);
		}
		start++;
	}
	return (stack);
}
