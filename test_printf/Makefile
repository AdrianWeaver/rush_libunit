NAME			=	libunit_tester

CC				= 	gcc

CFLAGS			=	-g3 -Wall -Wextra -Werror

INC				=	-I ../framework/						\
					-I ../libft/							\
					-I.										\
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
				$(addprefix $(M_c_PATH),\
				00_launcher.c								\
				01_c.c										\
				02_c.c										\
				03_c.c										\
				04_c.c										\
				05_c.c										\
				06_c.c										\
				07_c.c										\
				08_c.c)										\
				$(addprefix $(M_s_PATH),\
				00_launcher.c								\
				01_s.c										\
				02_s.c										\
				03_s.c										\
				04_s.c										\
				05_s.c										\
				06_s.c										\
				07_s.c										\
				08_s.c)										\
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
				$(addprefix $(M_p_PATH),\
				00_launcher.c								\
				01_p.c										\
				02_p.c										\
				03_p.c										\
				04_p.c										\
				05_p.c										\
				06_p.c										\
				07_p.c										\
				08_p.c)										\
				$(addprefix $(M_u_PATH),\
				00_launcher.c								\
				01_u.c										\
				02_u.c										\
				03_u.c										\
				04_u.c										\
				05_u.c										\
				06_u.c										\
				07_u.c										\
				08_u.c)										\
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
M_c_PATH	=	./c_mandatory/
M_s_PATH	=	./s_mandatory/
M_u_PATH	=	./u_mandatory/
M_p_PATH	=	./p_mandatory/

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

test:			$(LIBUNIT)		
				$(MAKE) -C ./ re
				./$(NAME)
	
.PHONY:			clean fclean all re
