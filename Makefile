NAME		=	libunit.a

LIBFT_PATH	=	./libft/

LIBFT		=	$(addprefix $(LIBFT_PATH),libft.a)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

SRCS_PATH	=	./framework/

SRCS		=	$(addprefix $(SRCS_PATH),\
				ft_check_result.c			\
				ft_launch_test.c			\
				ft_print_result.c			\
				ft_print_test.c				\
				ft_del.c					\
				ft_print_total.c			\
				ft_pipe_stdout.c			\
				ft_test_lst_new.c)

OBJS		=	$(SRCS:.c=.o)

INC			=	-I ./framework/				\
				-I ./libft/

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			ar -rcs $(NAME) $^

$(LIBFT):		
			$(MAKE) -C $(LIBFT_PATH) all

%.o:		%.c
			$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

clean:
			rm -f $(OBJS)
			$(MAKE) -C $(LIBFT_PATH) clean

fclean:		clean
			rm -f $(NAME)
			$(MAKE) -C $(LIBFT_PATH) fclean

re:			fclean all

test:		all #ajouter suite de cette ligne 

.PHONY:		all re clean fclean
