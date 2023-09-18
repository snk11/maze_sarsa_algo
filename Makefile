NAME = maze_sarsa

OBJ = main.o functions.o q_table.o rewards.o

FLAGS = -Wall -Werror -Wextra

MAIN = main.cpp

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
		g++ $(FLAGS) -c $< -o $@
