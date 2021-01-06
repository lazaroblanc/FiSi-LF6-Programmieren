#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	/*
		Schreiben Sie eine Konsolenanwendung in C die eine Texteingabe entgegennimmt und verarbeitet.
		z.B.: Die Anzahl der Zeicenk/Vorkommen bestimmter Zeichen auszählt, oder auch die Anzahl der Wörter, oder ...
	*/
	
	char eingabe[100];
	char trennzeichen[] = " ";
	
    printf("Bitte Eingabe machen: ");
    fgets(eingabe, sizeof(eingabe), stdin);
    
    int i;
    int woerter = 1;
    for(i = 0; i < strlen(eingabe); i++) {
    	if (eingabe[i] == 32) { woerter++; }
		printf("%c", eingabe[i]);
	}
	
	printf("Anzahl Woerter: %d", woerter);
    
	return 0;
}
