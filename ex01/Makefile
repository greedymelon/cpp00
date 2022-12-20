CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
FILES = phonebook.cpp \
Contact.cpp \
main.cpp

OBJ = ${FILES:%.cpp=%.o}

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(FILES)
		${CC} ${CFLAGS} -c ${FILES} 

re :	fclean all

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME} 

.PHONY: all clean fclean re