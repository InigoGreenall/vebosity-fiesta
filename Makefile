OBJECTS = main.o dtypes.o
FLAGS = -Wall -g
EXE_NAME = main

all: $(EXE_NAME)

$(EXE_NAME): $(OBJECTS)
	g++ $(FLAGS) $^ -o $(EXE_NAME) ./testing-include/libwlclient.a ./testing-include/libwayland-client.so.0.24.0

%.o: %.cpp %.h
	g++ $(FLAGS) -c $< -o $@

clean:
	rm *.o $(EXE_NAME)