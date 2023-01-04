# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:28:01 by muganiev          #+#    #+#              #
#    Updated: 2023/01/04 14:26:13 by muganiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES		=	src/parsing.c		src/sort.c		push_swap.c\
				src/stack_add.c		src/lists_init.c		src/push_comands.c\
				src/reverse_rotate_comands.c	src/rotate_comands.c\
				src/swap_comands.c	src/med_min_max.c	src/chunks.c\
				src/push_back.c\

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

NAME		=	push_swap

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