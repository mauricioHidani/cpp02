# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/09 16:01:51 by mhidani           #+#    #+#              #
#    Updated: 2026/03/09 16:56:44 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed
SINCE		= 2026.03.09
AUTHOR		= mhidani
LOCAL		= 42SP
VERSION		= 1.0.0v

INC_DIR		= include
SRC_DIR		= src
OBJ_DIR		= obj

FILES		= main.cpp Fixed.cpp
SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPINCS		= -I$(INC_DIR)/

MKD			= mkdir
MKDFLAGS	= --parents
RM			= rm
RMFLAGS		= --force --recursive

all: banner $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@echo "$(OBJ_DIR): is cleaned  🧹"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(NAME): is cleaned  🧹"

re: fclean all

banner:
	@echo "🛸 $(LOCAL) - [CPP-02 Exercise 01]"
	@echo "I add a more useful fixed-point number class $(VERSION)"
	@echo "$(AUTHOR) $(SINCE)"

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) $(CPPINCS) -o $@
	@echo "$(NAME): is done 🤙"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKD) $(MKDFLAGS) $(dir $@)
	@$(CPP) $(CPPFLAGS) $(CPPINCS) -c $< -o $@

.PHONY: clean fclean all re banner