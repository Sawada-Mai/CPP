NAME = phonebook

SRC = main.cpp \
			PhoneBook.cpp \
			Contact.cpp \

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all