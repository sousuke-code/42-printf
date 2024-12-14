NAME = libftprintf.a


SRCS =	ft_printf.c \
        ft_format_handler.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_put_hex.c \
		ft_put_ptr.c \
		ft_putnbr_unsigned.c \
		ft_put_pointer_char.c \
		ft_put_per.c \
		ft_put_hex_long.c \



OBJS = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all