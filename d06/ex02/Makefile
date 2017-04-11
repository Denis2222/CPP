NAME	= identify
SRC		=	main.cpp \
			Base.cpp \
			A.cpp \
			B.cpp \
			C.cpp

OBJ			= $(SRC:.cpp=.o)
CC			= clang++ -Wall -Wextra -Werror

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
