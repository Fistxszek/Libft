CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
#Source files
SRC = ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memmove.c \
ft_strlcpy.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_memchr.c \
ft_substr.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_memcpy.c \
ft_itoa.c \
ft_split.c \
ft_strjoin.c \
ft_strtrim.c \
ft_atoi.c \
ft_calloc.c \
ft_memccpy.c \
ft_memcmp.c \
ft_strdup.c \
ft_strlcat.c \
ft_strncmp.c \
ft_strnstr.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@ranlib $@

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
