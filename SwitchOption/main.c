#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	if (argc > 1) {
		
		int count;
		int valid = 1;
		
		for (count = 1; count < argc; count++) {
			
			if (argv[count][0] == '/') {
				
				switch (argv[count][1]){
					case '1':
					case '2':
					case '3':
						printf("Es war die %c\n", argv[count][1]);
						break;
					default:
						valid = 0;
						break;
				}	
				
				if (!valid) {break;}
				
			}
			else {
				valid = 0;
				break;
			}
			
		}
	}
	else {
		printf(
			"Sucht eine Option aus\n"
			"SWITCHOPTION\n\n"
			"n ist eine Zahl zwischen 1 und 3\n"
		);
	}		
	system("pause");
	return 0;
}
