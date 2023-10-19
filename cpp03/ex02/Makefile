SRCS			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		=  -std=c++98 -Wall -Wextra -Werror

NAME			= ClapTrap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re