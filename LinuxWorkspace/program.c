#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	char buffer[100];
	strcpy(buffer, argv[1]);
	printf("Done!");
	return 0;
}
