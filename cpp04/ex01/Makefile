SRCS			= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		=  -std=c++98 -Wall -Wextra -Werror

NAME			= Animal

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re