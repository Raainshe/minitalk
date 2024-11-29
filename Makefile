CC = cc
CC_FLAGS = -Wall -Werror -Wextra

# Targets
SERVER = server
CLIENT = client

# Source and Object Files
SRC_FILES = server.c client.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)

# Libft Paths
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CC_FLAGS) -I$(LIBFT_DIR) -c $< -o $@

# Default target
all: $(LIBFT) $(SERVER) $(CLIENT)

# Rule to create the executables
$(SERVER): server.o $(LIBFT)
	$(CC) $(CC_FLAGS) server.o -L$(LIBFT_DIR) -lft -o $(SERVER)

$(CLIENT): client.o $(LIBFT)
	$(CC) $(CC_FLAGS) client.o -L$(LIBFT_DIR) -lft -o $(CLIENT)

# Build Libft (if not already built)
$(LIBFT):
	make -C $(LIBFT_DIR)

# Clean up object files and executables
clean:
	rm -f $(OBJ_FILES)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(SERVER) $(CLIENT)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
