NAME = push_swap

SRCS = push_swap.c instruction.c instruction_2.c instruction_utils.c parsing.c stacks.c stacks_utils.c error.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
