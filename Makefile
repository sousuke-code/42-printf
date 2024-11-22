NAME = libftprintf.a

# ソースファイルのリスト
SRCS =	ft_printf.c \
        ft_format_handler.c \
		ft_putnbr.c \
		ft_putchar.c \

# オブジェクトファイルのリスト
OBJS = $(SRCS:.c=.o)

# コンパイラとフラグ
CC = cc
CFLAGS = -Wall -Wextra -Werror

# デフォルトターゲット
all: $(NAME)

# ライブラリの作成ルール
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


# オブジェクトファイルを生成するルール
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# クリーンアップ
clean:
	rm -f $(OBJS)

# 全ての生成ファイルの削除
fclean: clean
	rm -f $(NAME)

# 再ビルド
re: fclean all