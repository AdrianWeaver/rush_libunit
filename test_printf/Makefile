NAME			=	libunit_tester

CC				= 	gcc

CFLAGS			=	-g3 -Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/							\
					-I ./ft_printf/							\
					-I ../ft_printf/includes/

LIBUNIT			=	../libunit.a

LIBFT			=	../libft/libft.a

LIBFTPRINTF		=	../ft_printf/libftprintf.a

SRCS			=	main.c									\
				$(addprefix $(TEST_PATH),\
				00_launcher.c								\
				01_c.c)

OBJS			=	$(SRCS:.c=.o)

TEST_PATH	=	./ft_printf/

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBUNIT) $(LIBFT) $(LIBFTPRINTF)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBUNIT) $(LIBFT) $(LIBFTPRINTF)

%.o:			%.c
				$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

$(LIBFT):		
				$(MAKE) -C ../libft/.

$(LIBFTPRINTF):	
				$(MAKE) -C ../ft_printf/.

$(LIBUNIT):		
				$(MAKE) -C ../. re

clean:
				$(MAKE) -C ../. clean
				$(MAKE) -C ../libft/. clean
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

test:			re	
				$(MAKE) -C ../. re
				./$(NAME)
	
.PHONY:			clean fclean all re
