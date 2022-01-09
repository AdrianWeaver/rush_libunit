NAME			=	libunit_tester

CC				= 	gcc

CFLAGS			=	-Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/							\
					-I ./real_tests/

LIBUNIT			=	../libunit.a

LIBFT			=	../libft/libft.a

SRCS			=	main.c									\
				$(addprefix $(TEST_PATH),\
				00_launcher.c								\
				01_odd_values.c								\
				02_even_values.c							\
				03_zero.c									\
				04_minus_zero.c								\
				05_int_max.c								\
				06_int_min.c								\
				07_not_digit.c								\
				08_not_printable.c							\
				09_bigger_than_int_max.c					\
				10_bigger_than_int_max2.c					\
				11_bigger_than_int_max3.c					\
				12_whitespace.c								\
				13_whitespace_number.c						\
				14_whitespace_not_digit.c					\
				15_whitespace_negative_value.c				\
				16_whitespace_alternative.c					\
				17_whitespace_alternative2.c				\
				18_whitespace_incorrect.c)

OBJS			=	$(SRCS:.c=.o)

TEST_PATH	=	./real_tests/

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

test:			$(NAME)
				./$(NAME)
.PHONY:			clean fclean all re
