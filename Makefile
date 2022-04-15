CC = cc

CFLAGS = -Wall -Werror -Wextra

CFILES = push_swap.c\
		ft_checknumbers.c\
		ft_double.c\
		ft_move.c\
		ft_check_sorted.c\
		ft_move2.c\
		ft_move3.c\
		ft_sorting.c\
		ft_sorting2.c\
		ft_big_sort.c\

BFILES = push_swap_bonus.c\
		ft_checknumbers_bonus.c\
		ft_double_bonus.c\
		ft_check_sorted_bonus.c\
		ft_move_bonus.c\
		ft_move2_bonus.c\
		ft_move3_bonus.c\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.c=.o))

BOFILES = $(addprefix $(OBJB_DIR)/,$(BFILES:.c=.o))

OBJ_DIR = ./OBJ

OBJB_DIR = ./OBJB

SRC_DIR = ./SRC

BON_DIR = ./BONUS

LIB = libft/libft.a

INC = includes/push_swap.h

BINC = includes/push_swap_bonus.h

NAME = push_swap

bonus = checker

$(NAME) : $(LIB) $(OFILES)
	@$(CC) $(OFILES) $(LIB) -o $(NAME)
	@echo "done for push_swap"

$(LIB): force
	@make -C libft

force:

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INC) | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@


bonus : $(LIB) $(BOFILES)
	@$(CC) $(BOFILES) $(LIB) -o checker
	@echo "done for checker"

$(OBJB_DIR) :
	@mkdir OBJB

$(BOFILES) : $(OBJB_DIR)/%.o : $(BON_DIR)/%.c $(BINC) | $(OBJB_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR) $(OBJB_DIR)
	@make clean -C libft

fclean : clean
	@rm -rf $(NAME) $(bonus)
	@make fclean -C libft

re : fclean all

all : $(NAME)

norme :
	@norminette **/*.c
	@norminette **/*.h
