CC = cc
CC_FLAGS = -Wall -Werror -Wextra

# Targets
SERVER = server
CLIENT = client
SERVER_BONUS = server_bonus
CLIENT_BONUS =  client_bonus
# Source and Object Files
SRC_FILES = server.c client.c
SRC_FILES_BONUS = server_bonus.c client_bonus.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)
OBJ_FILES_BONUS = $(SRC_FILES_BONUS:%.c=%.o)

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

$(SERVER_BONUS): server_bonus.o $(LIBFT)
	$(CC) $(CC_FLAGS) server_bonus.o -L$(LIBFT_DIR) -lft -o $(SERVER_BONUS)

$(CLIENT_BONUS): client_bonus.o $(LIBFT)
	$(CC) $(CC_FLAGS) client_bonus.o -L$(LIBFT_DIR) -lft -o $(CLIENT_BONUS)

# Build Libft (if not already built)
$(LIBFT):
	make -C $(LIBFT_DIR)

# Bonus Instructions
bonus: $(SERVER_BONUS) $(CLIENT_BONUS)
# Clean up object files and executables
clean:
	rm -f $(OBJ_FILES) $(OBJ_FILES_BONUS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
