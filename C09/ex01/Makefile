SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

HEADERS = includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

RAN = ranlib

AR = ar rc

.c.o:
	${CC} ${CFLAGS} -c -I ${HEADERS}  $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJECTS}
	${AR} ${NAME} ${OBJECTS}
	${RAN} ${NAME}

clean:
	rm ${OBJECTS}

fclean:
	rm -f ${NAME}

re:
	fclean all
