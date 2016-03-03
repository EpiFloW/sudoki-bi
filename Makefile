##
## Makefile for  in /home/maison_f/Epitech/rendu/sudoki-bi
##
## Made by Maisonnave Florian
## Login   <maison_f@epitech.net>
##
## Started on  Fri Feb 26 20:28:28 2016 Maisonnave Florian
## Last update Mon Feb 29 13:41:49 2016 Maisonnave Florian
##

SRCS	=	src/main.c \
		src/malloc.c \
		src/fonctions.c \
		src/display.c \
		src/error.c \
		src/my_getnbr.c \
		src/str_to_int.c \
		src/algorithm.c \
		src/int_to_str.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic

HEAD	=	-Iinclude

CC	=	gcc $(HEAD)

RM	=	rm -f

NAME	=	sudoki-bi

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
