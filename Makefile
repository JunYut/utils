# Compiler & Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

# Files
HEADER = $(INC_DIR)/utils.h
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
LIBRARY = libutils.a

# Rules & Recipes
all: $(LIBRARY)

$(LIBRARY): $(OBJ)
	ar -rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

# Phony
.PHONY: all clean fclean re