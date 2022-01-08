NAME		=	libunit.a

LIBFT_PATH	=	./libft/

LIBFT		=	$(addprefix $(LIBFT_PATH),libft.a)

CC			=	clang

CFLAGS		=	-Wall -Werror -Wextra

SRCS		=	

OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)

$(LIBFT):		
			$(MAKE) -C $(LIBFT_PATH) all

%.o:		%.c
			$(CC) $(CFLAGS) -c $^ -o $@ -I .

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all re clean fclean
