#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int counter;
	for (counter = 0; counter < argc; counter++) {
		printf("%s\n", argv[counter]); // %s is the placeholder for the string
	}
	
	system("pause");
	return 0;
}
