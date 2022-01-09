NAME			=	libunit_tester

CC				= 	gcc

CFLAGS			=	-Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/							\
					-I ./basic_tests/

LIBUNIT			=	../libunit.a

LIBFT			=	../libft/libft.a

SRCS			=	main.c									\
				$(addprefix $(TEST_PATH),\
				00_launcher.c								\
				01_ok_test.c								\
				02_ko_test.c								\
				03_segfault.c)

OBJS			=	$(SRCS:.c=.o)

TEST_PATH	=	./basic_tests/

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBUNIT) $(LIBFT)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBUNIT) $(LIBFT)

%.o:			%.c
				$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

$(LIBFT):		
				$(MAKE) -C ../libft/.
$(LIBUNIT):
				$(MAKE) -C ../. 
clean:
				$(MAKE) -C ../. clean
				$(MAKE) -C ../libft/. clean
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

bonus:			all

test:			$(NAME)
				./$(NAME)
.PHONY:			clean fclean all re
