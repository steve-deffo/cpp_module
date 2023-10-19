SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLAGS			=  -std=c++98 -Wall -Wextra -Werror

NAME			= ThisIsBrain

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re