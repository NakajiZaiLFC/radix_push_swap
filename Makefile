NAME = push_swap
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L./libft -lft
LIBFTDIR = libft/
OBJ_DIR = obj/
SRC_DIR = src/push_swap/

SRC_1 = push_swap.c \

SRC_2 = error_check.c \
		init_stack.c \
		make_stack.c \
		coordinate_compre.c \
		sort_small.c \
		ope_a.c \
		ope_b.c \
		main_sort.c \
		free_array.c 


OBJ_1 = $(addprefix $(OBJ_DIR), $(SRC_1:.c=.o))
OBJ_2 = $(addprefix $(OBJ_DIR), $(SRC_2:.c=.o))

INCLUDE = -L ./libft -lft

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I./includes -I./libft

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	$(CC) $(CFLAGS) $(OBJ_1) $(OBJ_2) -o ${NAME} $(LDFLAGS)

all: ${NAME} ${BONUS}

clean:
	${RM} ${OBJ_DIR}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re