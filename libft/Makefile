CC = cc
CC_FLAGS = -Wall -Werror -Wextra
NAME = libft.a

# Update source, object, and header paths
SRC_DIR = src
OBJ_DIR = obj
HEADER_DIR = .

# Compilation flags to include the header directory
CFLAGS = $(CC_FLAGS) -I$(HEADER_DIR)

SRC_FILES = ft_atoi.c \
            ft_bzero.c \
            ft_calloc.c \
            ft_isalnum.c \
            ft_isalpha.c \
            ft_isascii.c \
            ft_isdigit.c \
            ft_isprint.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_memset.c \
            ft_split.c \
            ft_strchr.c \
            ft_strdup.c \
            ft_striteri.c \
            ft_strjoin.c \
            ft_strlcat.c \
            ft_strlcpy.c \
            ft_strlen.c \
            ft_strmapi.c \
            ft_strncmp.c \
            ft_strnstr.c \
            ft_strtrim.c \
            ft_substr.c \
            ft_tolower.c \
            ft_toupper.c \
            ft_itoa.c \
            ft_strrchr.c \
            ft_putchar_fd.c \
            ft_putstr_fd.c \
            ft_putendl_fd.c \
            ft_putnbr_fd.c \
            ft_lstadd_back_bonus.c \
            ft_lstadd_front_bonus.c \
            ft_lstclear_bonus.c \
            ft_lstdelone_bonus.c \
            ft_lstiter_bonus.c \
            ft_lstlast_bonus.c \
            ft_lstmap_bonus.c \
            ft_lstnew_bonus.c \
            ft_lstsize_bonus.c\
            ft_gethex.c\
			ft_printf.c\
			ft_putchar_fdp.c\
			ft_putnbr_fdp.c\
			ft_putstr_fdp.c\
			ft_toupperp.c\
			ft_print_unsigned.c\
			ft_get_address.c

# Add full paths for source and object files
SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
HEADER = $(HEADER_DIR)/libft.h

# Create obj directory before compiling
$(shell mkdir -p $(OBJ_DIR))

# Rule to compile .c files to .o files with header dependency
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p $(OBJ_DIR)  
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# Default target
all: $(NAME)

# Clean up object files
clean:
	rm -rf $(OBJ_DIR)

# Full clean (remove library and object files)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re