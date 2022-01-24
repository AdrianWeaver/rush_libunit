NAME			=	libunit_tester

CC				= 	gcc

CFLAGS			=	-g3 -Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/							\
					-I ./mandatory/							\
					-I ./x_mandatory/						\
					-I ./X_mandatory/						\
					-I ../ft_printf/includes/

LIBUNIT			=	../libunit.a

LIBFT			=	../libft/libft.a

LIBFTPRINTF		=	../ft_printf/libftprintf.a

SRCS			=	main.c									\
				$(addprefix $(MANDATORY_P),\
				00_launcher.c								\
				01_c.c										\
				02_s.c										\
				03_p.c										\
				04_d.c										\
				05_i.c										\
				06_u.c										\
				07_x.c										\
				08_X.c										\
				09_%.c)										\
				$(addprefix $(M_x_PATH),\
				00_launcher.c								\
				01_x.c										\
				02_x.c										\
				03_x.c										\
				04_x.c										\
				05_x.c										\
				06_x.c										\
				07_x.c										\
				08_x.c)										\
				$(addprefix $(M_X_PATH),\
				00_launcher.c								\
				01_x.c										\
				02_x.c										\
				03_x.c										\
				04_x.c										\
				05_x.c										\
				06_x.c										\
				07_x.c										\
				08_x.c)

OBJS			=	$(SRCS:.c=.o)

MANDATORY_P =	./mandatory/

M_x_PATH	=	./x_mandatory/
M_X_PATH	=	./X_mandatory/

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

test:				
				$(MAKE) -C ./ re && $(MAKE) -C ../. re
				./$(NAME)
	
.PHONY:			clean fclean all re
