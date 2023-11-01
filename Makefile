# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 13:49:56 by pibouill          #+#    #+#              #
#    Updated: 2023/11/01 12:49:51by pibouill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
## ARGUMENTS

NAME 	= libftprintf.a
AR		= ar rc
CFLAGS 	= -Wall -Werror -Wextra
CC 		= cc
RM 		= rm -rf
SRC_DIR = src
INC		= -I ./inc/
LIB_DIR = libft
LIB_INC = -I ./libft/inc/
BIN_DIR = bin
LIB_CUT = $(shell echo $(LIB_DIR) | cut -c 4-)

################################################################################
## COLORS

# Reset
Color_Off= \033[0m       # Text Reset

# Regular Colors
Black= \033[0;30m        # Black
Red= \033[0;31m          # Red
Green= \033[0;32m        # Green
Yellow= \033[0;33m       # Yellow
Blue= \033[0;34m         # Blue
Purple= \033[0;35m       # Purple
Cyan= \033[0;36m         # Cyan
White= \033[0;37m        # White

# Bold
BBlack= \033[1;30m       # Black
BRed= \033[1;31m         # Red
BGreen= \033[1;32m       # Green
BYellow= \033[1;33m      # Yellow
BBlue= \033[1;34m        # Blue
BPurple= \033[1;35m      # Purple
BCyan= \033[1;36m        # Cyan
BWhite= \033[1;37m       # White

# Underline
UBlack= \033[4;30m       # Black
URed= \033[4;31m         # Red
UGreen= \033[4;32m       # Green
UYellow= \033[4;33m      # Yellow
UBlue= \033[4;34m        # Blue
UPurple= \033[4;35m      # Purple
UCyan= \033[4;36m        # Cyan
UWhite= \033[4;37m       # White

# Background
On_Black= \033[40m       # Black
On_Red= \033[41m         # Red
On_Green= \033[42m       # Green
On_Yellow= \033[43m      # Yellow
On_Blue= \033[44m        # Blue
On_Purple= \033[45m      # Purple
On_Cyan= \033[46m        # Cyan
On_White= \033[47m       # White

# High Intensty
IBlack= \033[0;90m       # Black
IRed= \033[0;91m         # Red
IGreen= \033[0;92m       # Green
IYellow= \033[0;93m      # Yellow
IBlue= \033[0;94m        # Blue
IPurple= \033[0;95m      # Purple
ICyan= \033[0;96m        # Cyan
IWhite= \033[0;97m       # White

# Bold High Intensty
BIBlack= \033[1;90m      # Black
BIRed= \033[1;91m        # Red
BIGreen= \033[1;92m      # Green
BIYellow= \033[1;93m     # Yellow
BIBlue= \033[1;94m       # Blue
BIPurple= \033[1;95m     # Purple
BICyan= \033[1;96m       # Cyan
BIWhite= \033[1;97m      # White

# High Intensty backgrounds
On_IBlack= \033[0;100m   # Black
On_IRed= \033[0;101m     # Red
On_IGreen= \033[0;102m   # Green
On_IYellow= \033[0;103m  # Yellow
On_IBlue= \033[0;104m    # Blue
On_IPurple= \033[10;95m  # Purple
On_ICyan= \033[0;106m    # Cyan
On_IWhite= \033[0;107m   # White

################################################################################
## SOURCES

SRCS_FILES	= $(shell find ./src -type f -exec basename {} \; | rev | cut -d. -f2- | rev)

OBJ 		=	$(addprefix $(BIN_DIR)/, $(addsuffix .o, $(SRC_FILES)))
SRC 		=	$(addprefix $(BIN_DIR)/, $(addsuffix .c, $(SRC_FILES)))

################################################################################
## RULES

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C libft
		@$(CC) -o $(NAME) $(OBJ) -L $(LIB_DIR) -l $(LIB_CUT)
		@echo "$(GREEN)$(NAME) Compiled.$(END_COLOR)"

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c Makefile libft/src/*.c | $(BIN_DIR)
		@$(CC) -c $(CFLAGS) $(INC) $(LIB_INC) $< -o $@
		@echo "$(IBlue)Compiling... $(notdir $<)$(END_COLOR)"

$(BIN_DIR):
		@mkdir $(BIN_DIR)
		@echo "$(YELLOW)Created $(BIN_DIR)/ directory in $(NAME)/$(END_COLOR)"

clean:
		@rm -rf $(BIN_DIR)
		@echo "$(YELLOW)$(NAME) object files cleaned.$(END_COLOR)"
		@make clean -C libft

fclean: 	clean
		@rm -f $(NAME)
		@echo "$(YELLOW)$(NAME) executable file cleaned.$(END_COLOR)"
		@rm -f libft/libft.a
		@echo "$(YELLOW)$(LIB_DIR).a file cleaned.$(END_COLOR)"

re: 		fclean all
		@echo "$(GREEN)Cleaned all and rebuilt $(NAME) and $(LIB_DIR)$(END_COLOR)"

test:
	@cc $(CFLAGS) $(LIB_INC) $(INC) test.c src/*.c
	@echo "$(Purple)< Test compiled and ready to run a.out>$(END_COLOR)"

################################################################################
## PHONY

.PHONY:		all clean fclean re
