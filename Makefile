OBJECTS = main.o dtypes.o
FLAGS = -Wall -g
EXE_NAME = main
LIBS = ./testing-include

all: $(EXE_NAME)

$(EXE_NAME): $(OBJECTS) $(LIBS)/olive.o
	g++ $(FLAGS) $^ -o $(EXE_NAME) $(LIBS)/libwlclient.a $(LIBS)/libwayland-client.so.0.24.0

olive.o: $(LIBS)/olive.c
	cc $(FLAGS) -c $< -o $(LIBS)/$@

%.o: %.cpp %.h
	g++ $(FLAGS) -c $< -o $@

clean:
	rm *.o */*.o $(EXE_NAME)