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
			$(MAKE) -C $(LIBFT_PATH) clean

fclean:		clean
			rm -f $(NAME)
			$(MAKE) -C $(LIBFT_PATH) fclean

re:			fclean all

test:		all && #ajouter suite de cette ligne 

.PHONY:		all re clean fclean
