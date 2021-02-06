
.PHONY: all clean fclean re

NAME = libft.a

SRCS = ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_memmove.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strrchr.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_putendl_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_split.c

OBJS =  ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memset.o \
		ft_strchr.o \
		ft_strncmp.o \
		ft_memmove.o \
		ft_atoi.o \
		ft_bzero.o \
		ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isprint.o \
		ft_isascii.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strrchr.o \
		ft_strlen.o	\
		ft_strlcpy.o \
		ft_putnbr_fd.o \
		ft_putstr_fd.o \
		ft_putchar_fd.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_strlcat.o \
		ft_strnstr.o \
		ft_putendl_fd.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_itoa.o \
		ft_strmapi.o \
		ft_split.o

FLAG = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
		
clean:
	rm -f $(OBJS)
	
fclean:
	rm -f $(NAME)

re: fclean all
