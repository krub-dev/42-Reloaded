#Name of the library Libft.a
NAME = libft.a

#FLAGS
CFLAGS = -Wall -Werror -Wextra

#Sources
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

#Objects
OBJS = $(SRCS:.c=.o)

#Include
INCLUDES = includes/

#Library
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

#Rules

#Take .o, generate .c
%.o: %.c
	gcc $(CFLAGS) -I$(INCLUDES) -c $< -o $@

#Target default (when you do make)
all: $(NAME)

#Clean .o files
clean:
	rm -f $(OBJS)

#Make clean, delete binary(executable)
fclean: clean
	rm -f $(NAME)

#Fclean and make again
re: fclean all
