NAME	:= libft.a
SRCS	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c

OBJS	:= ${SRCS:.c=.o} #Convert all *.c to *.o It actually says '$(CC) -c $(CFLAGS) $(CPPFLAGS). This an implicit rule'
CFLAGS	:= -Wall -Wextra -Werror
CC		:= gcc
BON_SRC := ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
BON_OBJ := ${BON_SRC:.c=.o}

${NAME}:	${OBJS}
			ar -crs ${NAME} ${OBJS}			

all:		${NAME}

clean:
			${RM} ${OBJS} ${BON_OBJ} a.out

fclean:		clean
			${RM} ${NAME}

bonus:		${NAME} ${BON_OBJ}
			ar -crs ${NAME} ${OBJS} ${BON_OBJ}

re:			fclean all

rebonus:    fclean bonus

.PHONY:		all clean fclean re bonus rebonus

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
			gcc -nostartfiles -shared -o libft.so $(OBJS)