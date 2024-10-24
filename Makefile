NAME = skyscraper_game

SRC = sources/main.c sources/check.c sources/add_4.c \
      sources/init.c sources/tools.c sources/add_3.c \
      sources/add_3_next.c sources/add_2_1.c sources/add_2_1_next.c \
      sources/last_number.c sources/last_number_next.c \
      sources/check_place.c \

RM = rm -rf

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I./header

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
