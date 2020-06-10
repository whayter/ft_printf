NAME = libftprintf.a

PRNTF =	ft_printf.c			\
		check.c				\
		get_arg.c			\
		get_addr.c			\
		write_arg.c			\

LIBFT =	ft_isdigit.c		\
		ft_atoi.c			\
		ft_itoa.c			\
		ft_utoa.c			\
		ft_putrchar.c		\
		ft_putrstr.c		\
		ft_putrnstr.c		\
		ft_strdup.c			\
		ft_strndup.c		\
		ft_strlen.c			\
		ft_free_str.c		\
		ft_strjoin.c		\
		ft_absval.c			\

SRCS = $(PRNTF) $(LIBFT)

INCLUDES = ./includes/ft_printf.h

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

CC = gcc

RM = rm -f

$(NAME):
			@echo "Compiling..."
			@($(CC) $(CFLAGS) -c $(SRCS))
			@(ar rc $(NAME) $(OBJS))
			@(ranlib $(NAME))
			@echo "Done."

all:		$(NAME)

clean:
			@echo "cleaning..."
			@($(RM) $(OBJS))
			@echo "Done."

fclean:		clean
			@echo "fcleaning..."
			@($(RM) $(NAME))
			@echo "Done."

re:			fclean all

.PHONY:		all clean fclean re
