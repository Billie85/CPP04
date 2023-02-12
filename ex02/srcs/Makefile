NAME	= AbstractClass

SRCS	= main.cpp \
		  Cat.cpp \
		  Animal.cpp \
		  Dog.cpp \
		  Brain.cpp


OBJS		= $(SRCS:%.cpp=%.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re : fclean all