#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const char* myWords[] = {"Eins", "Zwei", "Drei"};
	const int myWordsCount = 3;
	
	int i;
	for (i=0; i < myWordsCount; i++) {
		printf("Nr. %i: %s\n", i, myWords[i]);
	}
	
	return 0;
}
