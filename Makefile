CC = cc

CFLAGS = -Wall -Werror -Wextra

CFILES = push_swap.c\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.c=.o))

OBJ_DIR = ./OBJ

SRC_DIR = ./SRC

LIB = libft/libft.a

PRINT = printf/libftprintf.a

INC = includes/push_swap.h

NAME = push_swap

$(NAME) : $(LIB) $(PRINT) $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) $(LIB) $(PRINT) -o $(NAME)

$(LIB) :
	make -C libft

$(PRINT) :
	make -C printf

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	@$(CC) -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)
	@make clean -C printf
	@make clean -C libft

fclean : clean
	@rm -rf $(NAME)
	@make fclean -C printf
	@make fclean -C libft

re : fclean all

all : $(NAME)

norme :
	@norminette **/*.c
	@norminette **/*.h