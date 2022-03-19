CC = cc

CFILES = ft_printf.c ft_printf_utils.c

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.c=.o))

CFLAGS = -c -Wall -Werror -Wextra

NAME = libftprintf.a

INC = includes/ft_printf.h

OBJ_DIR = ./OBJ

SRC_DIR = ./SRC

$(NAME) : $(OFILES)
	@ar -cr ${NAME} ${OFILES}

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

all : $(NAME)

norme :
	@norminette **/*.c
	@norminette **/*.h