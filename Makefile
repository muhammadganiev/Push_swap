# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:28:01 by muganiev          #+#    #+#              #
#    Updated: 2022/12/08 18:31:17 by muganiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES =	src/parsing.c		src/sort.c		push_swap.c\


LIBFT		=	cd libft && make

LIB			=	libft/libft.a

# Sources and objects
SRC			=	$(FILES)

OBJS_SRC	=	$(SRC:.c=.o)

OBJS		=	$(OBJS_SRC)

# ------------------------------ Constant strings ------------------------------

GCC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-I include

NAME = push_swap
# ------------------------------ Rules ------------------------------

all: $(NAME)

$(NAME): $(OBJS)
		$(LIBFT) 
		$(GCC) $(FLAGS) $(OBJS) $(LIB) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	@cd libft && make clean

fclean: clean
	@rm -rf $(NAME)
	@cd libft && make fclean

.c.o:
	@${GCC} ${FLAGS} $(INCLUDE) -c $< -o ${<:.c=.o}

re:	fclean all