# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/22 20:05:48 by resilva           #+#    #+#              #
#    Updated: 2025/02/16 18:17:48 by resilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------ Colors ------------------------------
BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_GREEN	=	\033[1;32m
BOLD_YELLOW	=	\033[1;33m
NO_COLOR	=	\033[0m

# ------------------------------ Message ------------------------------
COMP_START	=	echo "\n $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation...\n"
READY		=	echo "\n $(BOLD_GREEN)Ready: $(NO_COLOR)The program$(BOLD_CYAN) megaphone $(NO_COLOR)has been compiled!\n"
CLEANED		=	echo "\n $(BOLD_PURPLE)clean: $(NO_COLOR)Removed all the \".o\" files \n"
FCLEANED	=	echo "\n $(BOLD_PURPLE)fclean: $(NO_COLOR)Removed the executables \n"

# ------------------------------ Variables ------------------------------

NAME = megaphone
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
DN = /dev/null 2>&1
SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

.cpp.o:
	@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
		@$(COMP_START)
		@${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}
		@$(READY) 

all: ${NAME}

clean:
	@${RM} ${OBJ} 
	@$(CLEANED)

fclean: clean
	@${RM} ${NAME}
	@$(FCLEANED)

re: fclean all

.PHONY: all clean fclean re