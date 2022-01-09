NAME			=	libunit_tester

CC				=	gcc

CFLAGS			=	-MMD -Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/

SRCS			=	main.c									\
				$(addprefix $(FT_ATOI_PATH),\
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
				00_launcher.c								\
				18_whitespace_incorrect.c)

OBJS			=	$(SRCS:.c=.o)	

DEP				=	$(OBJS:.o=.d)

FT_ATOI_PATH	=	./ft_atoi/

REAL_TEST_PATH	=	./real_test/

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) -o $(NAME) $(OBJS)

%.o:			%.c
				$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

clean:
				rm -f $(OBJS)
				rm -f $(DEP)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			clean fclean all re
