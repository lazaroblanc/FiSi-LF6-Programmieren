#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, r;
	
	// Zwei Eingabewerte abfragen und speichern
	printf("Eingabe 1. Zahl: "); scanf("%d", &x);
	printf("Eingabe 2. Zahl: "); scanf("%d", &y);
	
	while(y > 0) {
		r = x % y;
		x = y;
		y = r;
	}
	
	printf("\nggT: %d", x);
	
	return 0;
}
