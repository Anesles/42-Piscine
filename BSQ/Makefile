NAME 	= bsq
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
SRC 	= srcs/analyze_map.c srcs/error.c srcs/main.c srcs/print.c srcs/read_map.c srcs/solve.c
OBJS 	= ${SRC:.c=.o}
INCS	= includes

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I ${INCS} -g

$(NAME): ${OBJS}
		$(CC) $(CFLAGS) ${OBJS} -o ${NAME} -g

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f $(NAME)

re: fclean allx