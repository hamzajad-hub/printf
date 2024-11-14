CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS =	ft_puthex.c ft_putptr.c ft_putuni.c ft_printf.c\
		ft_putchar.c ft_putnbr.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

.SECONDARY: $(OBJS)
