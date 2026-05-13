OBJECTS = main.o softwarerender.o dtypes.o
FLAGS = -Wall -g
EXE_NAME = main
LIB_DIR = ./testing-include

all: $(EXE_NAME)

$(EXE_NAME): $(OBJECTS) $(LIB_DIR)/olive.o
	g++ $(FLAGS) $^ -o $(EXE_NAME) $(LIB_DIR)/libwlclient.a -lwayland-client

olive.o: $(LIB_DIR)/olive.c
	cc $(FLAGS) -c $< -o $(LIB_DIR)/$@

%.o: %.cpp %.h
	g++ $(FLAGS) -c $< -o $@

clean:
	rm *.o */*.o $(EXE_NAME)