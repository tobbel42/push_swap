/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:17:51 by tgrossma          #+#    #+#             */
/*   Updated: 2021/08/24 14:47:03 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker_bonus.h"

/*
//executes the input instruction, which begins with 'r'
//returns 1 if valid instruction, 0 on unexpected result
*/
static int	r_moves(t_head *a, t_head *b, char *line)
{
	if (!ft_strncmp(line, "ra\n", 3))
		ps_r(a, 0);
	else if (!ft_strncmp(line, "rb\n", 3))
		ps_r(b, 0);
	else if (!ft_strncmp(line, "rr\n", 3))
	{
		ps_r(a, 0);
		ps_r(b, 0);
	}
	else if (!ft_strncmp(line, "rra\n", 4))
		ps_rr(a, 0);
	else if (!ft_strncmp(line, "rrb\n", 4))
		ps_rr(b, 0);
	else if (!ft_strncmp(line, "rrr\n", 4))
	{
		ps_rr(a, 0);
		ps_rr(b, 0);
	}
	else
		return (0);
	return (1);
}

/*
//executes the input instruction
//returns 1 if valid instruction, 0 on unexpected result
*/
static int	checker_moves(t_head *a, t_head *b, char *line)
{
	if (!ft_strncmp(line, "r", 1))
	{
		if (!r_moves(a, b, line))
			return (0);
	}
	else if (!ft_strncmp(line, "sa\n", 3))
		ps_swap(a, 0);
	else if (!ft_strncmp(line, "sb\n", 3))
		ps_swap(b, 0);
	else if (!ft_strncmp(line, "ss\n", 3))
	{
		ps_swap(a, 0);
		ps_swap(b, 0);
	}	
	else if (!ft_strncmp(line, "pb\n", 3))
		ps_push(b, a, 0);
	else if (!ft_strncmp(line, "pa\n", 3))
		ps_push(a, b, 0);
	else
		return (0);
	return (1);
}

/*
//reads the instructions from the pipe, then checks the result
*/
static void	checker_read(t_head *a, t_head *b)
{
	char	*line;
	int		flag;

	line = get_next_line(0);
	if (line)
		flag = checker_moves(a, b, line);
	while (line && flag)
	{
		free (line);
		line = get_next_line(0);
		if (line)
			flag = checker_moves(a, b, line);
	}
	if (line)
		free(line);
	if (flag == 0)
		write(2, "Error\n", 6);
	else
	{
		if (ps_check_stack(a, b))
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
	return ;
}

/*
//checks the result of the push_swap function sorts the given stack
//the original stack is given on lauch, the instruction via a pipe
//OK if they sort the stack, KO if not, Error on unexpected input
//ex: $> ARG="3 1 2"; ./push_swap | ./checker $ARG
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
		return (0);
	b = ps_new_stack('b');
	if (!b)
		return (0);
	checker_read(a, b);
	ps_del_stack(a);
	ps_del_stack(b);
	return (0);
}
