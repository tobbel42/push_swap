/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrossma <tgrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:50:59 by tgrossma          #+#    #+#             */
/*   Updated: 2021/09/09 12:56:50 by tgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
//the stack is implemented as a linked list, which can be traversed in both
//directions, and the last element is linked to the first and vice versa.
//the stack_head keeps track of the starting point and the lenght of the stack
*/
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "../libft/libft.h"
typedef struct s_stack_element
{
	int						data;
	struct s_stack_element	*next;
	struct s_stack_element	*prev;
}	t_elem;
typedef struct s_stack_head
{
	char					name;
	int						len;
	t_elem					*head;
}	t_head;
t_head	*ps_new_stack(char name);
t_elem	*ps_new_stack_element(int nbr);
t_elem	*ps_cut_elem(t_head *stack);
void	ps_insert_elem(t_head *stack, t_elem *elem);
void	ps_del_stack(t_head *stack);
void	ps_push(t_head *dest, t_head *src, int mode);
void	ps_r(t_head *stack, int mode);
void	ps_rr(t_head *stack, int mode);
void	ps_swap(t_head *stack, int mode);
void	ps_put_stacks(t_head *a, t_head *b);
t_head	*ps_init(int start, int end, char **list);
t_head	*ps_parse_str(char *str);
void	ps_sort_stack(t_head *a, t_head *b);
int		ps_find_insert(t_head *dest, int n);
void	ps_rotate_stack(t_head *stack, int pos);
int		ps_find_min(t_head *stack);
int		ps_find_pos(t_head *stack, int value);
int		ps_check_dup(t_head *stack, int nbr);
void	ps_solve_two(t_head *a);
void	ps_solve_three(t_head *a);
void	ps_solve_small(t_head *a, t_head *b);
void	ps_solve_big(t_head *a, t_head *b);
int		ps_check_stack(t_head *a, t_head *b);
int		ps_best_push(t_head *a, t_head *b);
void	ps_make_push(t_head *a, t_head *b, int value);
int		ps_count_moves(int pos_a, int pos_b, int len_a, int len_b);
int		ps_max(int a, int b);
int		ps_min(int a, int b);
#endif