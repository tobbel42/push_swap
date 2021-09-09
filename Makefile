CC=gcc
C_FLAGS=-Wall -Wextra -Werror
NAME_MAIN=push_swap
NAME_BONUS=checker
LIBS=libft/libft.a
GNL=get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c
SRC_DIR=./sources/
SRC_LIST_MAIN= push_swap.c
SRC_LIST_BONUS= checker_bonus.c
SRC_LIST=ps_solve_three.c \
	ps_init.c \
	ps_find_insert.c \
	ps_find_min.c \
	ps_rotate_stack.c \
	ps_sort_stack.c \
	ps_check_dup.c \
	ps_solve_small.c \
	ps_solve_two.c \
	ps_solve_big.c \
	ps_check_stack.c \
	ps_parse_str.c \
	ps_cut_elem.c \
	ps_del_stack.c \
	ps_insert_elem.c \
	ps_new_stack.c \
	ps_new_stack_element.c \
	ps_push.c \
	ps_r.c \
	ps_rr.c \
	ps_swap.c \
	ps_find_pos.c \
	ps_best_push.c \
	ps_make_push.c
SRC= $(addprefix $(SRC_DIR), $(SRC_LIST))
SRC_MAIN= $(addprefix $(SRC_DIR), $(SRC_LIST_MAIN))
SRC_BONUS= $(addprefix $(SRC_DIR), $(SRC_LIST_BONUS))

all:$(NAME_MAIN)

$(NAME_MAIN): $(SRC) $(SRC_MAIN)
	make -C libft
	$(CC) $(C_FLAGS) $^ $(LIBS) -o $@

$(OBJ_LIST): $(SRC_LIST)

clean:
	make -C libft clean

fclean:
	make -C libft fclean
	rm -f $(NAME_MAIN) $(NAME_BONUS)

re:
	make fclean
	make $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(SRC) $(SRC_BONUS) $(GNL)
	make -C libft
	$(CC) $(C_FLAGS) $^ $(LIBS) -o $@ -D BUFFER_SIZE=42