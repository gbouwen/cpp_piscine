# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: gbouwen <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/04 15:20:48 by gbouwen       #+#    #+#                  #
#    Updated: 2020/08/04 17:24:03 by gbouwen       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE_CPP = main.cpp
OBJECT_FILES = $(SOURCE_CPP:.cpp=.o)

GREEN = \033[0;38;5;114m
RED = \033[38;5;124m
BLUE = \033[38;5;153m
NORMAL = \033[38;5;255m

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREEN)Created object file:$(NORMAL)	$@"

$(NAME): $(OBJECT_FILES)
	@$(CC) $(FLAGS) $(OBJECT_FILES) -o $(NAME)
	@echo "-----------------------------------"
	@echo "$(BLUE)Created executable:$(NORMAL)	$(NAME)"
	@echo "-----------------------------------"

clean:
	@/bin/rm -f $(OBJECT_FILES)
	@echo "$(RED)Removed all .o files$(NORMAL)"
	@echo "-----------------------------------"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f *.replace
	@echo "$(RED)Removed executable:$(NORMAL)	$(NAME)"
	@echo "-----------------------------------"
	@echo "$(RED)Removed all .replace files.$(NORMAL)"
	@echo "-----------------------------------"

re: fclean all
