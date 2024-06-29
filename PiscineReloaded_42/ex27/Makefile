#Name of the executable
NAME = ft_display_file

#FLAGS
CFLAGS = -Wall -Werror -Wextra

#Sources
SRCS = ./srcs/ft_display_file.c

#Objects
OBJS = $(SRCS:.c=.o)

#Rules

#Target default (when you do make)
all: $(NAME)

#Create the executable from .o
$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

#Take .o, generate .c
%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

#Clean .o files
clean:
	rm -f $(OBJS)

#Make clean, delete binary(executable)
fclean: clean
	rm -f $(NAME)
